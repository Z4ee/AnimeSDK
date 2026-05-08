#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B87CC10)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87CC50)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1B87CC60)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_1_OFFSET UNITYSDK_OFFSET(0x1B87CD10)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_2_OFFSET UNITYSDK_OFFSET(0x1B87CD50)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_3_OFFSET UNITYSDK_OFFSET(0x1B87CD90)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataReader___c_TypeDefinitionIndex = 7286;

	class BinaryDataReader___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::BinaryDataReader___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::BinaryDataReader___c**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader___c_TypeDefinitionIndex)->GetStaticField(0x6240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CTOR_OFFSET))(this);
		}

		::System::Char __cctor_b__70_0(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::Char(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_0_OFFSET))(this, b, i);
		}

		::System::Byte __cctor_b__70_1(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::Byte(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_1_OFFSET))(this, b, i);
		}

		::System::SByte __cctor_b__70_2(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::SByte(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_2_OFFSET))(this, b, i);
		}

		::System::Boolean __cctor_b__70_3(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__70_3_OFFSET))(this, b, i);
		}
	};
}
