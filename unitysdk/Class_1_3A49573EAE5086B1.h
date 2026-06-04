#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }

#define CLASS_1_3A49573EAE5086B1_METHOD_1_199DEE7C1A4E938A_OFFSET UNITYSDK_OFFSET(0x144F9FB0)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_25F60DFEA24FB3F6_OFFSET UNITYSDK_OFFSET(0x144FA060)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x144F9EC0)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_2C6C956FDBDB81A4_OFFSET UNITYSDK_OFFSET(0x144FA070)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x144FA080)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_6B4492CD728A146C_OFFSET UNITYSDK_OFFSET(0x144F9E90)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_78D0DE776FCD07AA_OFFSET UNITYSDK_OFFSET(0x144F9D90)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x144F9EB0)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_BF5D6FB0A4E1E893_OFFSET UNITYSDK_OFFSET(0x144FA190)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x144F9EA0)
#define CLASS_1_3A49573EAE5086B1_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x144F9ED0)
#define CLASS_1_3A49573EAE5086B1__CTOR_OFFSET UNITYSDK_OFFSET(0x144FA2F0)

inline static constexpr unsigned int Class_1_3A49573EAE5086B1_TypeDefinitionIndex = 52305;

class Class_1_3A49573EAE5086B1 : public ::System::Object
{
public:
	::RPG::GameCore::SpecialAvatarRow* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::IAvatarCommonRowWrap* Field_1_2; // 0x20
	::RPG::GameCore::LineUpCharacter* Field_1_3; // 0x28
	::RPG::AvatarSystem::IAvatar* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78D0DE776FCD07AA(::RPG::GameCore::LineUpCharacter* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_78D0DE776FCD07AA_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::LineUpCharacter* Method_1_6B4492CD728A146C()
	{
		return ((::RPG::GameCore::LineUpCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_6B4492CD728A146C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_27FE160831643A26(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_27FE160831643A26_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::System::UInt32 Method_1_199DEE7C1A4E938A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_199DEE7C1A4E938A_OFFSET))(this);
	}

	::RPG::GameCore::IAvatarCommonRowWrap* Method_1_25F60DFEA24FB3F6()
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_25F60DFEA24FB3F6_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarRow* Method_1_2C6C956FDBDB81A4()
	{
		return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_2C6C956FDBDB81A4_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_BF5D6FB0A4E1E893()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A49573EAE5086B1_METHOD_1_BF5D6FB0A4E1E893_OFFSET))(this);
	}
};
