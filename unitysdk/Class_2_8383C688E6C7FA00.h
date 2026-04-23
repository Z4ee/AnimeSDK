#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeInfo; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_8383C688E6C7FA00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1196B130)
#define CLASS_2_8383C688E6C7FA00_METHOD_2_BF61CDE6729E5156_OFFSET UNITYSDK_OFFSET(0x1196A630)
#define CLASS_2_8383C688E6C7FA00__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x1196B0F0)
#define CLASS_2_8383C688E6C7FA00__CTOR_OFFSET UNITYSDK_OFFSET(0x1196A4B0)
#define CLASS_2_8383C688E6C7FA00__REBUILD_OFFSET UNITYSDK_OFFSET(0x1196A690)

inline static constexpr unsigned int Class_2_8383C688E6C7FA00_TypeDefinitionIndex = 69194;

class Class_2_8383C688E6C7FA00 : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* Field_2_1; // 0x20
	::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* a1, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo*, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_8383C688E6C7FA00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF61CDE6729E5156(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8383C688E6C7FA00_METHOD_2_BF61CDE6729E5156_OFFSET))(this, a1, a2);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8383C688E6C7FA00__REBUILD_OFFSET))(this);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8383C688E6C7FA00__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8383C688E6C7FA00_DISPOSE_OFFSET))(this);
	}
};
