#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ServantRowData; }

#define CLASS_1_273027062EB7437C_METHOD_1_A09387834EE4A072_OFFSET UNITYSDK_OFFSET(0x1384DB20)
#define CLASS_1_273027062EB7437C_METHOD_1_E0912D51D24B8AC6_OFFSET UNITYSDK_OFFSET(0x1384DA40)
#define CLASS_1_273027062EB7437C_METHOD_1_FEF062A2DC4257FF_OFFSET UNITYSDK_OFFSET(0x1384DBB0)
#define CLASS_1_273027062EB7437C__CTOR_OFFSET UNITYSDK_OFFSET(0x1384DC80)

inline static constexpr unsigned int Class_1_273027062EB7437C_TypeDefinitionIndex = 58601;

class Class_1_273027062EB7437C : public ::System::Object
{
public:
	::RPG::GameCore::ServantRowData* Field_1_0; // 0x10
	::RPG::AvatarSystem::IAvatar* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273027062EB7437C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ServantRowData* Method_1_E0912D51D24B8AC6()
	{
		return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273027062EB7437C_METHOD_1_E0912D51D24B8AC6_OFFSET))(this);
	}

	::System::Void Method_1_A09387834EE4A072(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_273027062EB7437C_METHOD_1_A09387834EE4A072_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEF062A2DC4257FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_273027062EB7437C_METHOD_1_FEF062A2DC4257FF_OFFSET))(this);
	}
};
