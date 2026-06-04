#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_CFA21987E6EBF45D_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x1925A1E0)
#define CLASS_3_CFA21987E6EBF45D_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1925A260)
#define CLASS_3_CFA21987E6EBF45D__CTOR_OFFSET UNITYSDK_OFFSET(0x1925A230)

inline static constexpr unsigned int Class_3_CFA21987E6EBF45D_TypeDefinitionIndex = 20302;

class Class_3_CFA21987E6EBF45D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::UInt32 Field_3_3; // 0x30
	::RPG::GameCore::LittleGameEntityType Field_3_4; // 0x34
	::System::UInt32 Field_3_5; // 0x38
	::RPG::GameCore::ChenLingFesTargetType Field_3_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFA21987E6EBF45D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CFA21987E6EBF45D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CFA21987E6EBF45D*&))((::PBYTE)hIl2Cpp + CLASS_3_CFA21987E6EBF45D_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CFA21987E6EBF45D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CFA21987E6EBF45D*))((::PBYTE)hIl2Cpp + CLASS_3_CFA21987E6EBF45D_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
