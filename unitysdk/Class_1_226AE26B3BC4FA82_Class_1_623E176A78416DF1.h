#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_125;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_35BF7C3B1038EEE4_OFFSET UNITYSDK_OFFSET(0x10B6BB60)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_3F56FE65BC3C682F_OFFSET UNITYSDK_OFFSET(0x10B6BB40)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_80D17D5096B17A35_OFFSET UNITYSDK_OFFSET(0x10B6BB20)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_9F1F052798A1EF73_OFFSET UNITYSDK_OFFSET(0x10B6BB50)
#define CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B6BB10)

inline static constexpr unsigned int Class_1_226AE26B3BC4FA82_Class_1_623E176A78416DF1_TypeDefinitionIndex = 68066;

class Class_1_226AE26B3BC4FA82_Class_1_623E176A78416DF1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::Class_2_208CC9941471731A_125* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_80D17D5096B17A35(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_80D17D5096B17A35_OFFSET))(this, a1);
	}

	::MoleMole::UIRoleSelectPageContext* Method_1_3F56FE65BC3C682F(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_3F56FE65BC3C682F_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIActivePropsWindowContext* Method_1_9F1F052798A1EF73(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_9F1F052798A1EF73_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35BF7C3B1038EEE4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_226AE26B3BC4FA82_CLASS_1_623E176A78416DF1_METHOD_1_35BF7C3B1038EEE4_OFFSET))(this, a1);
	}
};
