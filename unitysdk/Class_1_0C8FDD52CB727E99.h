#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0C8FDD52CB727E99_PhotoUpdateUseGraphType.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GlobalTimeSlow; }
namespace RPG::GameCore { class PhotoGraphUpdateTwoPointFourParam; }
namespace RPG::GameCore { class SwitchPhotographDragMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0C8FDD52CB727E99_METHOD_1_1E862743DFFAFAF1_OFFSET UNITYSDK_OFFSET(0xD13CA50)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xD13CBA0)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD13CC60)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD13CC00)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_A093382008FCAC7C_OFFSET UNITYSDK_OFFSET(0xD13B200)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xD13C9A0)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_B6BF8BDAB8EF1357_OFFSET UNITYSDK_OFFSET(0xD13CD10)
#define CLASS_1_0C8FDD52CB727E99_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0xD13CF00)
#define CLASS_1_0C8FDD52CB727E99__CTOR_OFFSET UNITYSDK_OFFSET(0xD13D120)

inline static constexpr unsigned int Class_1_0C8FDD52CB727E99_TypeDefinitionIndex = 56762;

class Class_1_0C8FDD52CB727E99 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	::RPG::GameCore::GlobalTimeSlow* Field_1_2; // 0x10
	::RPG::GameCore::TaskContext* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_0C8FDD52CB727E99_PhotoUpdateUseGraphType, ::Class_3_5775A4FEC79026BC*>* Field_1_0; // 0x20
	::RPG::GameCore::SwitchPhotographDragMode* Field_1_1; // 0x28
	::System::Boolean Field_1_7; // 0x30
	::System::Boolean Field_1_6; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A093382008FCAC7C(::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_A093382008FCAC7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_1E862743DFFAFAF1(::Class_1_0C8FDD52CB727E99_PhotoUpdateUseGraphType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C8FDD52CB727E99_PhotoUpdateUseGraphType))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_1E862743DFFAFAF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6BF8BDAB8EF1357(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_B6BF8BDAB8EF1357_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8FDD52CB727E99_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}
};
