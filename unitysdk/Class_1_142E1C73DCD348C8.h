#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_454F7A38128A75F1;
class Class_2_208CC9941471731A_511;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_142E1C73DCD348C8_METHOD_1_364C043C5B0212F9_OFFSET UNITYSDK_OFFSET(0x16928020)
#define CLASS_1_142E1C73DCD348C8_METHOD_1_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x16928010)
#define CLASS_1_142E1C73DCD348C8__CTOR_OFFSET UNITYSDK_OFFSET(0x16927F30)

inline static constexpr unsigned int Class_1_142E1C73DCD348C8_TypeDefinitionIndex = 12012;

class Class_1_142E1C73DCD348C8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_454F7A38128A75F1*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_511*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142E1C73DCD348C8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_511*>* Method_1_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_511*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142E1C73DCD348C8_METHOD_1_977A5C8234F34C98_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_454F7A38128A75F1*>* Method_1_364C043C5B0212F9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_454F7A38128A75F1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142E1C73DCD348C8_METHOD_1_364C043C5B0212F9_OFFSET))(this);
	}
};
