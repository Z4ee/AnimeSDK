#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace System { class String; }

#define CLASS_3_D34DC667C78FACFB_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1D83FF40)
#define CLASS_3_D34DC667C78FACFB_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1D83FED0)
#define CLASS_3_D34DC667C78FACFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83FF20)

inline static constexpr unsigned int Class_3_D34DC667C78FACFB_TypeDefinitionIndex = 20169;

class Class_3_D34DC667C78FACFB : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::BubbleTalkInfo*>* GPGOMMAGIBD; // 0x18
	::System::String* GFNAPNFFGPJ; // 0x20
	::System::Single OKILLMNGPGB; // 0x28
	::System::Boolean LHPMNOHBIMI; // 0x2C
	::System::Boolean BNIMJJNOLAI; // 0x2D
	::System::UInt32 AHGIENEMKFI; // 0x30
	::RPG::GameCore::BubbleTalkType GKLGANJDBMM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D34DC667C78FACFB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D34DC667C78FACFB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D34DC667C78FACFB*&))((::PBYTE)hIl2Cpp + CLASS_3_D34DC667C78FACFB_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D34DC667C78FACFB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D34DC667C78FACFB*))((::PBYTE)hIl2Cpp + CLASS_3_D34DC667C78FACFB_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
