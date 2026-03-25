#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
class Class_1_69FF5DE516C87A66;
class Class_2_D533150DA9942A27;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_310D67B31C67B0C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89C41E0)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0x89C4F90)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x89C5190)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0x89C5340)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_9BB0845AD13FC9CB_OFFSET UNITYSDK_OFFSET(0x89C4BD0)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_9EF2487FEEF4EB62_OFFSET UNITYSDK_OFFSET(0x89C4EB0)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x89C50C0)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_D4497E56EEC58A37_OFFSET UNITYSDK_OFFSET(0x89C43A0)
#define CLASS_1_310D67B31C67B0C3__CTOR_OFFSET UNITYSDK_OFFSET(0x89C53B0)

inline static constexpr unsigned int Class_1_310D67B31C67B0C3_TypeDefinitionIndex = 49174;

class Class_1_310D67B31C67B0C3 : public ::System::Object
{
public:
	::Class_1_36264895A759B0FF* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_2; // 0x18
	::Class_1_69FF5DE516C87A66* Field_1_3; // 0x20
	::UnityEngine::Playables::PlayableDirector* Field_1_6; // 0x28
	::Class_2_D533150DA9942A27* Field_1_4; // 0x30
	::RPG::GameCore::TaskContext* Field_1_1; // 0x38
	::System::String* Field_1_0; // 0x40
	::System::Int32 Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D4497E56EEC58A37(::System::String* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_D4497E56EEC58A37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F2F7924D292824D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_2F2F7924D292824D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BB0845AD13FC9CB(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_9BB0845AD13FC9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_9EF2487FEEF4EB62(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_9EF2487FEEF4EB62_OFFSET))(this, a1);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D79C223C10A615(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_46D79C223C10A615_OFFSET))(this, a1);
	}
};
