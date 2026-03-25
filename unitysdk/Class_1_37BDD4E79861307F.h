#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }

#define CLASS_1_37BDD4E79861307F_METHOD_1_25F60DFEA24FB3F6_OFFSET UNITYSDK_OFFSET(0x105F25F0)
#define CLASS_1_37BDD4E79861307F_METHOD_1_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x105F2410)
#define CLASS_1_37BDD4E79861307F_METHOD_1_2C6C956FDBDB81A4_OFFSET UNITYSDK_OFFSET(0x105F2600)
#define CLASS_1_37BDD4E79861307F_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x105F2610)
#define CLASS_1_37BDD4E79861307F_METHOD_1_6B4492CD728A146C_OFFSET UNITYSDK_OFFSET(0x105F23E0)
#define CLASS_1_37BDD4E79861307F_METHOD_1_78D0DE776FCD07AA_OFFSET UNITYSDK_OFFSET(0x105F22E0)
#define CLASS_1_37BDD4E79861307F_METHOD_1_A2C9D0C4183704D7_OFFSET UNITYSDK_OFFSET(0x105F2710)
#define CLASS_1_37BDD4E79861307F_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x105F2400)
#define CLASS_1_37BDD4E79861307F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x105F23F0)
#define CLASS_1_37BDD4E79861307F_METHOD_1_F0E4FAC8E5EC9E93_1_OFFSET UNITYSDK_OFFSET(0x105F2500)
#define CLASS_1_37BDD4E79861307F_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x105F2420)
#define CLASS_1_37BDD4E79861307F__CTOR_OFFSET UNITYSDK_OFFSET(0x105F2930)

inline static constexpr unsigned int Class_1_37BDD4E79861307F_TypeDefinitionIndex = 44885;

class Class_1_37BDD4E79861307F : public ::System::Object
{
public:
	::RPG::GameCore::IAvatarCommonRowWrap* Field_1_3; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::RPG::GameCore::SpecialAvatarRow* Field_1_4; // 0x20
	::RPG::Client::IAvatarInfoProvider* Field_1_5; // 0x28
	::RPG::GameCore::LineUpCharacter* Field_1_0; // 0x30
	::System::Int32 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78D0DE776FCD07AA(::RPG::GameCore::LineUpCharacter* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_78D0DE776FCD07AA_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::LineUpCharacter* Method_1_6B4492CD728A146C()
	{
		return ((::RPG::GameCore::LineUpCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_6B4492CD728A146C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_27FE160831643A26(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_27FE160831643A26_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_F0E4FAC8E5EC9E93_1_OFFSET))(this);
	}

	::RPG::GameCore::IAvatarCommonRowWrap* Method_1_25F60DFEA24FB3F6()
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_25F60DFEA24FB3F6_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarRow* Method_1_2C6C956FDBDB81A4()
	{
		return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_2C6C956FDBDB81A4_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_A2C9D0C4183704D7()
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37BDD4E79861307F_METHOD_1_A2C9D0C4183704D7_OFFSET))(this);
	}
};
