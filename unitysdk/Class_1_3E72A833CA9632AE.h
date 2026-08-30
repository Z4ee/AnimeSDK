#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleCustomShowConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3E72A833CA9632AE_METHOD_1_4740469FBEDBBA91_OFFSET UNITYSDK_OFFSET(0x1785FAF0)
#define CLASS_1_3E72A833CA9632AE_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1785F9F0)
#define CLASS_1_3E72A833CA9632AE_METHOD_1_94C1F5658622A270_OFFSET UNITYSDK_OFFSET(0x1785FBA0)
#define CLASS_1_3E72A833CA9632AE_METHOD_1_D6485DD5E981D2FF_OFFSET UNITYSDK_OFFSET(0x1785FA30)

inline static constexpr unsigned int Class_1_3E72A833CA9632AE_TypeDefinitionIndex = 66140;

class Class_1_3E72A833CA9632AE : public ::System::Object
{
public:
	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E72A833CA9632AE_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_D6485DD5E981D2FF(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E72A833CA9632AE_METHOD_1_D6485DD5E981D2FF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_94C1F5658622A270(::RPG::GameCore::ChronicleCustomShowCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChronicleCustomShowCondition*))((::PBYTE)hIl2Cpp + CLASS_1_3E72A833CA9632AE_METHOD_1_94C1F5658622A270_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4740469FBEDBBA91(::RPG::GameCore::ChronicleCustomShowConditionType a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChronicleCustomShowConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3E72A833CA9632AE_METHOD_1_4740469FBEDBBA91_OFFSET))(a1, a2);
	}
};
