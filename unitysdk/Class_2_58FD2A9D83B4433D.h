#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client::Prop { class RogueDLCCompass; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class RogueDLC1Dot3CompassProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_58FD2A9D83B4433D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95315B0)
#define CLASS_2_58FD2A9D83B4433D_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x9531870)
#define CLASS_2_58FD2A9D83B4433D_METHOD_2_2185F8A39E7E07F0_OFFSET UNITYSDK_OFFSET(0x9531990)
#define CLASS_2_58FD2A9D83B4433D_METHOD_2_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0x95319E0)
#define CLASS_2_58FD2A9D83B4433D_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x9531A40)
#define CLASS_2_58FD2A9D83B4433D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9531710)
#define CLASS_2_58FD2A9D83B4433D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9531820)
#define CLASS_2_58FD2A9D83B4433D_TICK_OFFSET UNITYSDK_OFFSET(0x95316B0)
#define CLASS_2_58FD2A9D83B4433D__CTOR_OFFSET UNITYSDK_OFFSET(0x95315A0)

inline static constexpr unsigned int Class_2_58FD2A9D83B4433D_TypeDefinitionIndex = 53886;

class Class_2_58FD2A9D83B4433D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::Prop::RogueDLCCompass* Field_2_2; // 0x18
	::RPG::GameCore::CharacterModelComponent* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::RogueDLC1Dot3CompassProcess* Field_2_0; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3CompassProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_2185F8A39E7E07F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_METHOD_2_2185F8A39E7E07F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2934FD95900E25B5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_METHOD_2_2934FD95900E25B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_58FD2A9D83B4433D_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
