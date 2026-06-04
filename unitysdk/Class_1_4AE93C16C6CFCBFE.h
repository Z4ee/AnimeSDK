#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AE93C16C6CFCBFE___c__DisplayClass4_0.h"
#include "unitysdk/Struct_2_68841D2E219E78DE.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define CLASS_1_4AE93C16C6CFCBFE_METHOD_1_0E6ABD6D0F01B295_OFFSET UNITYSDK_OFFSET(0x1432D740)
#define CLASS_1_4AE93C16C6CFCBFE_METHOD_1_12730721951C6911_OFFSET UNITYSDK_OFFSET(0x1432F040)
#define CLASS_1_4AE93C16C6CFCBFE_METHOD_1_3656A5209665B4F0_OFFSET UNITYSDK_OFFSET(0x1432F1D0)
#define CLASS_1_4AE93C16C6CFCBFE_METHOD_1_3AF8231DFCB670E3_OFFSET UNITYSDK_OFFSET(0x1432DA00)
#define CLASS_1_4AE93C16C6CFCBFE_METHOD_1_935949FE2DEAFFC9_OFFSET UNITYSDK_OFFSET(0x1432D690)
#define CLASS_1_4AE93C16C6CFCBFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1432FE30)
#define CLASS_1_4AE93C16C6CFCBFE___CREATENORMALSKIN_G__ADDMAP_4_0_OFFSET UNITYSDK_OFFSET(0x1432FDC0)

inline static constexpr unsigned int Class_1_4AE93C16C6CFCBFE_TypeDefinitionIndex = 58574;

class Class_1_4AE93C16C6CFCBFE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_935949FE2DEAFFC9(::Struct_2_68841D2E219E78DE& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_68841D2E219E78DE&))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE_METHOD_1_935949FE2DEAFFC9_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_12730721951C6911(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE_METHOD_1_12730721951C6911_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_0E6ABD6D0F01B295(::Struct_2_68841D2E219E78DE& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_68841D2E219E78DE&))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE_METHOD_1_0E6ABD6D0F01B295_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_3656A5209665B4F0(::Struct_2_68841D2E219E78DE& a1, ::RPG::GameCore::IAvatarCommonRowWrap* a2, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* a3, ::RPG::GameCore::ItemRow* a4)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_68841D2E219E78DE&, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE_METHOD_1_3656A5209665B4F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_3AF8231DFCB670E3(::Struct_2_68841D2E219E78DE& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_68841D2E219E78DE&))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE_METHOD_1_3AF8231DFCB670E3_OFFSET))(this, a1);
	}

	static ::System::Void __CreateNormalSkin_g__AddMap_4_0(::System::String* a1, ::System::String* a2, ::Class_1_4AE93C16C6CFCBFE___c__DisplayClass4_0& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Class_1_4AE93C16C6CFCBFE___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + CLASS_1_4AE93C16C6CFCBFE___CREATENORMALSKIN_G__ADDMAP_4_0_OFFSET))(a1, a2, a3);
	}
};
