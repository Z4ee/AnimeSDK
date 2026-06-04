#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_ISMARKED_OFFSET UNITYSDK_OFFSET(0x1AD2D870)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_MARKBIT_OFFSET UNITYSDK_OFFSET(0x1AD2D800)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER_TOINTARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD2D8E0)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD2D7F0)
#define SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2D7E0)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int BitHelper_TypeDefinitionIndex = 3682;

	class BitHelper : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _array; // 0x10
		::System::Int32* _arrayPtr; // 0x18
		::System::Int32 _length; // 0x20
		::System::Boolean _useStackAlloc; // 0x24

		::System::Void _ctor(::System::Int32* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void MarkBit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_MARKBIT_OFFSET))(this, a1);
		}

		::System::Boolean IsMarked(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_ISMARKED_OFFSET))(this, a1);
		}

		static ::System::Int32 ToIntArrayLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_BITHELPER_TOINTARRAYLENGTH_OFFSET))(a1);
		}
	};
}
