#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_781AEDA45A069C28___c__DisplayClass2_0.h"
#include "unitysdk/Struct_2_0158E2E99AA204F4.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System { class String; }

#define CLASS_1_781AEDA45A069C28_METHOD_1_482DD52D147482DD_OFFSET UNITYSDK_OFFSET(0x1178D250)
#define CLASS_1_781AEDA45A069C28_METHOD_1_5FEC9AC22DAC0C31_OFFSET UNITYSDK_OFFSET(0x1178E0C0)
#define CLASS_1_781AEDA45A069C28_METHOD_1_AF39B7F5FFC7B957_OFFSET UNITYSDK_OFFSET(0x1178D2D0)
#define CLASS_1_781AEDA45A069C28__CTOR_OFFSET UNITYSDK_OFFSET(0x1178F7E0)
#define CLASS_1_781AEDA45A069C28___CREATENORMALSKIN_G__ADDMAP_2_0_OFFSET UNITYSDK_OFFSET(0x1178F770)

inline static constexpr unsigned int Class_1_781AEDA45A069C28_TypeDefinitionIndex = 57764;

class Class_1_781AEDA45A069C28 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_781AEDA45A069C28__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_482DD52D147482DD(::Struct_2_0158E2E99AA204F4& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_0158E2E99AA204F4&))((::PBYTE)hIl2Cpp + CLASS_1_781AEDA45A069C28_METHOD_1_482DD52D147482DD_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_AF39B7F5FFC7B957(::Struct_2_0158E2E99AA204F4& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_0158E2E99AA204F4&))((::PBYTE)hIl2Cpp + CLASS_1_781AEDA45A069C28_METHOD_1_AF39B7F5FFC7B957_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_5FEC9AC22DAC0C31(::Struct_2_0158E2E99AA204F4& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_0158E2E99AA204F4&))((::PBYTE)hIl2Cpp + CLASS_1_781AEDA45A069C28_METHOD_1_5FEC9AC22DAC0C31_OFFSET))(this, a1);
	}

	static ::System::Void __CreateNormalSkin_g__AddMap_2_0(::System::String* originPath, ::System::String* realPath, ::Class_1_781AEDA45A069C28___c__DisplayClass2_0& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Class_1_781AEDA45A069C28___c__DisplayClass2_0&))((::PBYTE)hIl2Cpp + CLASS_1_781AEDA45A069C28___CREATENORMALSKIN_G__ADDMAP_2_0_OFFSET))(originPath, realPath, a3);
	}
};
