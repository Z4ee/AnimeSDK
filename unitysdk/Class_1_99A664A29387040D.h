#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F1450C7202739F5;
class Class_1_7BD81C3D1A781452;

#define CLASS_1_99A664A29387040D_METHOD_1_46BAD610FE8DB0B4_OFFSET UNITYSDK_OFFSET(0xA07AC00)
#define CLASS_1_99A664A29387040D_METHOD_1_4E35707373DCBA3B_OFFSET UNITYSDK_OFFSET(0xA07ADE0)
#define CLASS_1_99A664A29387040D__CTOR_OFFSET UNITYSDK_OFFSET(0xA07AE40)

inline static constexpr unsigned int Class_1_99A664A29387040D_TypeDefinitionIndex = 57781;

class Class_1_99A664A29387040D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99A664A29387040D__CTOR_OFFSET))(this);
	}

	::Class_1_4F1450C7202739F5* Method_1_46BAD610FE8DB0B4(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_4F1450C7202739F5*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_99A664A29387040D_METHOD_1_46BAD610FE8DB0B4_OFFSET))(this, a1);
	}

	::Class_1_7BD81C3D1A781452* Method_1_4E35707373DCBA3B(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_7BD81C3D1A781452*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_99A664A29387040D_METHOD_1_4E35707373DCBA3B_OFFSET))(this, a1);
	}
};
