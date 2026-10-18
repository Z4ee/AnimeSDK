#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_DEBC02AFE672267B_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x1D2BC830)
#define CLASS_3_DEBC02AFE672267B_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1D2BC7C0)
#define CLASS_3_DEBC02AFE672267B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BC810)

inline static constexpr unsigned int Class_3_DEBC02AFE672267B_TypeDefinitionIndex = 22386;

class Class_3_DEBC02AFE672267B : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* OJGCIEKNGPM; // 0x18
	::RPG::MVector3 NEMDKBKDFDN; // 0x20
	::System::Boolean EKGDOELGLFK; // 0x2C
	::System::Boolean BMOBAIDLBCC; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEBC02AFE672267B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DEBC02AFE672267B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DEBC02AFE672267B*&))((::PBYTE)hIl2Cpp + CLASS_3_DEBC02AFE672267B_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DEBC02AFE672267B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DEBC02AFE672267B*))((::PBYTE)hIl2Cpp + CLASS_3_DEBC02AFE672267B_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
