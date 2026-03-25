#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

class Class_1_643D83DDDD9FD97F;
class Class_1_CA217ABF4E3B4F3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF11EFE40187AFC2_METHOD_1_2173776BAD5E5520_OFFSET UNITYSDK_OFFSET(0xA1DD670)
#define CLASS_1_CF11EFE40187AFC2_METHOD_1_363D2832DDD152E2_OFFSET UNITYSDK_OFFSET(0xA1DD510)
#define CLASS_1_CF11EFE40187AFC2_METHOD_1_4CB7A0C70044BB19_OFFSET UNITYSDK_OFFSET(0xA1DD770)
#define CLASS_1_CF11EFE40187AFC2_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0xA1DD8D0)
#define CLASS_1_CF11EFE40187AFC2_METHOD_1_9FC7E29CA23560D1_OFFSET UNITYSDK_OFFSET(0xA1DDA90)
#define CLASS_1_CF11EFE40187AFC2_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0xA1DD3E0)
#define CLASS_1_CF11EFE40187AFC2__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DD490)

inline static constexpr unsigned int Class_1_CF11EFE40187AFC2_TypeDefinitionIndex = 58721;

class Class_1_CF11EFE40187AFC2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleUIPanelType, ::Class_1_643D83DDDD9FD97F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2__CTOR_OFFSET))(this);
	}

	static ::Class_1_CF11EFE40187AFC2* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_CF11EFE40187AFC2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_363D2832DDD152E2(::RPG::GameCore::BattleUIPanelType a1, ::Class_1_CA217ABF4E3B4F3F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2_METHOD_1_363D2832DDD152E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2173776BAD5E5520(::RPG::GameCore::BattleUIPanelType a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2_METHOD_1_2173776BAD5E5520_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4CB7A0C70044BB19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2_METHOD_1_4CB7A0C70044BB19_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B933DECC394D41D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2_METHOD_1_8B933DECC394D41D_OFFSET))(this);
	}

	::System::Boolean Method_1_9FC7E29CA23560D1(::RPG::GameCore::BattleUIPanelType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + CLASS_1_CF11EFE40187AFC2_METHOD_1_9FC7E29CA23560D1_OFFSET))(this, a1);
	}
};
