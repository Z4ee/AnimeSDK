#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class IOctData; }

#define QWER_COCTSTREAM_CLONETO_OFFSET UNITYSDK_OFFSET(0x1C558300)
#define QWER_COCTSTREAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1C558800)
#define QWER_COCTSTREAM_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C5583D0)
#define QWER_COCTSTREAM_GET_POPINDEX_OFFSET UNITYSDK_OFFSET(0x1C5583C0)
#define QWER_COCTSTREAM_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C5583A0)
#define QWER_COCTSTREAM_POP_1_OFFSET UNITYSDK_OFFSET(0x1C558720)
#define QWER_COCTSTREAM_POP_OFFSET UNITYSDK_OFFSET(0x1C558660)
#define QWER_COCTSTREAM_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1C558580)
#define QWER_COCTSTREAM_PUSH_OFFSET UNITYSDK_OFFSET(0x1C5584F0)
#define QWER_COCTSTREAM_RESERVE_OFFSET UNITYSDK_OFFSET(0x1C558420)
#define QWER_COCTSTREAM_RESIZE_OFFSET UNITYSDK_OFFSET(0x1C5583F0)
#define QWER_COCTSTREAM_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1C5583E0)
#define QWER_COCTSTREAM_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C5583B0)
#define QWER_COCTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5582D0)

namespace QWER
{
	inline static constexpr unsigned int COctStream_TypeDefinitionIndex = 8590;

	class COctStream : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MaxStringInternSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(COctStream_TypeDefinitionIndex)->GetStaticField(0xC850);
		}
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x10
		::System::Int32 m_dwSize; // 0x18
		::System::Int32 m_dwPopIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_SET_SIZE_OFFSET))(this, value);
		}

		::System::Int32 get_PopIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_GET_POPINDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_SET_DATA_OFFSET))(this, value);
		}

		::System::Void Resize(::System::Int32 dwSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_RESIZE_OFFSET))(this, dwSize);
		}

		::System::Void Reserve(::System::Int32 dwCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_RESERVE_OFFSET))(this, dwCapacity);
		}

		::QWER::COctStream* Push(::System::UInt16 data)
		{
			return ((::QWER::COctStream*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_PUSH_OFFSET))(this, data);
		}

		::QWER::COctStream* Push_1(::QWER::IOctData* data)
		{
			return ((::QWER::COctStream*(*)(::PVOID, ::QWER::IOctData*))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_PUSH_1_OFFSET))(this, data);
		}

		::QWER::COctStream* Pop(::System::UInt16& data)
		{
			return ((::QWER::COctStream*(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_POP_OFFSET))(this, data);
		}

		::QWER::COctStream* Pop_1(::QWER::IOctData* data)
		{
			return ((::QWER::COctStream*(*)(::PVOID, ::QWER::IOctData*))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_POP_1_OFFSET))(this, data);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_CLONE_OFFSET))(this);
		}

		::System::Void CloneTo(::QWER::COctStream* oDestination)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::COctStream*))((::PBYTE)hIl2Cpp + QWER_COCTSTREAM_CLONETO_OFFSET))(this, oDestination);
		}
	};
}
