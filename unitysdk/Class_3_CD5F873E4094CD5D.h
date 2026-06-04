#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define CLASS_3_CD5F873E4094CD5D_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0x199759E0)
#define CLASS_3_CD5F873E4094CD5D_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x19975A60)
#define CLASS_3_CD5F873E4094CD5D__CTOR_OFFSET UNITYSDK_OFFSET(0x19975A30)

inline static constexpr unsigned int Class_3_CD5F873E4094CD5D_TypeDefinitionIndex = 20320;

class Class_3_CD5F873E4094CD5D : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD5F873E4094CD5D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CD5F873E4094CD5D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CD5F873E4094CD5D*&))((::PBYTE)hIl2Cpp + CLASS_3_CD5F873E4094CD5D_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CD5F873E4094CD5D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CD5F873E4094CD5D*))((::PBYTE)hIl2Cpp + CLASS_3_CD5F873E4094CD5D_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
