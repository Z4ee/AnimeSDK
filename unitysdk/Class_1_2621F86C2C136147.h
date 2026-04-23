#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleCustomShowConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2621F86C2C136147_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11BA53D0)
#define CLASS_1_2621F86C2C136147_METHOD_1_C8EBC75A5F681171_OFFSET UNITYSDK_OFFSET(0x11BA54B0)
#define CLASS_1_2621F86C2C136147_METHOD_1_F041241F76E760D3_OFFSET UNITYSDK_OFFSET(0x11BA55D0)
#define CLASS_1_2621F86C2C136147_METHOD_1_FAC5FC12CB86E46D_OFFSET UNITYSDK_OFFSET(0x11BA5410)

inline static constexpr unsigned int Class_1_2621F86C2C136147_TypeDefinitionIndex = 60859;

class Class_1_2621F86C2C136147 : public ::System::Object
{
public:
	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2621F86C2C136147_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_FAC5FC12CB86E46D(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomShowCondition*>*))((::PBYTE)hIl2Cpp + CLASS_1_2621F86C2C136147_METHOD_1_FAC5FC12CB86E46D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F041241F76E760D3(::RPG::GameCore::ChronicleCustomShowCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChronicleCustomShowCondition*))((::PBYTE)hIl2Cpp + CLASS_1_2621F86C2C136147_METHOD_1_F041241F76E760D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C8EBC75A5F681171(::RPG::GameCore::ChronicleCustomShowConditionType a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChronicleCustomShowConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2621F86C2C136147_METHOD_1_C8EBC75A5F681171_OFFSET))(a1, a2);
	}
};
