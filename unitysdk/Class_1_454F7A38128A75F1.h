#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_142;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_454F7A38128A75F1_METHOD_1_09A793AFA42FADB5_OFFSET UNITYSDK_OFFSET(0x17EDCA00)
#define CLASS_1_454F7A38128A75F1_METHOD_1_2733F872C86C1773_1_OFFSET UNITYSDK_OFFSET(0x17EDCA20)
#define CLASS_1_454F7A38128A75F1_METHOD_1_2733F872C86C1773_OFFSET UNITYSDK_OFFSET(0x17EDCA10)
#define CLASS_1_454F7A38128A75F1_METHOD_1_FA5EFB3A13C76C8C_1_OFFSET UNITYSDK_OFFSET(0x17EDCA40)
#define CLASS_1_454F7A38128A75F1_METHOD_1_FA5EFB3A13C76C8C_OFFSET UNITYSDK_OFFSET(0x17EDCA30)
#define CLASS_1_454F7A38128A75F1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDC960)

inline static constexpr unsigned int Class_1_454F7A38128A75F1_TypeDefinitionIndex = 9418;

class Class_1_454F7A38128A75F1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Byte, ::Class_2_208CC9941471731A_142*>* Field_1_2; // 0x10
	::System::Byte Field_1_1; // 0x18
	::System::Byte Field_1_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_454F7A38128A75F1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Byte, ::Class_2_208CC9941471731A_142*>* Method_1_09A793AFA42FADB5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Byte, ::Class_2_208CC9941471731A_142*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_454F7A38128A75F1_METHOD_1_09A793AFA42FADB5_OFFSET))(this);
	}

	::System::Void Method_1_2733F872C86C1773(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_454F7A38128A75F1_METHOD_1_2733F872C86C1773_OFFSET))(this, a1);
	}

	::System::Void Method_1_2733F872C86C1773_1(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_454F7A38128A75F1_METHOD_1_2733F872C86C1773_1_OFFSET))(this, a1);
	}

	::System::Byte Method_1_FA5EFB3A13C76C8C()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_454F7A38128A75F1_METHOD_1_FA5EFB3A13C76C8C_OFFSET))(this);
	}

	::System::Byte Method_1_FA5EFB3A13C76C8C_1()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_454F7A38128A75F1_METHOD_1_FA5EFB3A13C76C8C_1_OFFSET))(this);
	}
};
