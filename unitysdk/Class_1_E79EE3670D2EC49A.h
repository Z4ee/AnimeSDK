#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1552;
class Class_1_C6F4C4ABEDB8B5E9;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::FateRin { template <typename T> class PresentResult_1; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E79EE3670D2EC49A_METHOD_1_194C0AD32C94B856_1_OFFSET UNITYSDK_OFFSET(0x1551DBB0)
#define CLASS_1_E79EE3670D2EC49A_METHOD_1_194C0AD32C94B856_OFFSET UNITYSDK_OFFSET(0x1551DAE0)
#define CLASS_1_E79EE3670D2EC49A_METHOD_1_6F24BF1AF940C4CD_OFFSET UNITYSDK_OFFSET(0x1551D900)
#define CLASS_1_E79EE3670D2EC49A_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1551DEB0)
#define CLASS_1_E79EE3670D2EC49A_METHOD_1_B620779B82187134_OFFSET UNITYSDK_OFFSET(0x1551DC80)
#define CLASS_1_E79EE3670D2EC49A_METHOD_1_B93DE89DE2ACE353_OFFSET UNITYSDK_OFFSET(0x1551DA40)
#define CLASS_1_E79EE3670D2EC49A__CTOR_OFFSET UNITYSDK_OFFSET(0x1551CFA0)

inline static constexpr unsigned int Class_1_E79EE3670D2EC49A_TypeDefinitionIndex = 80617;

class Class_1_E79EE3670D2EC49A : public ::System::Object
{
public:
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>* JOBAHEDGFAK; // 0x18
	::Class_0_16E4307DCC419505_1552* MLGCJCPCLJP; // 0x20

	::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1, ::Class_0_16E4307DCC419505_1552* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*, ::Class_0_16E4307DCC419505_1552*))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* Method_1_6F24BF1AF940C4CD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A_METHOD_1_6F24BF1AF940C4CD_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* Method_1_B93DE89DE2ACE353()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A_METHOD_1_B93DE89DE2ACE353_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* Method_1_B620779B82187134(::System::String* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A_METHOD_1_B620779B82187134_OFFSET))(this, a1);
	}

	::System::Action* Method_1_194C0AD32C94B856(::System::Action* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A_METHOD_1_194C0AD32C94B856_OFFSET))(this, a1);
	}

	::System::Action* Method_1_194C0AD32C94B856_1(::System::Action* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A_METHOD_1_194C0AD32C94B856_1_OFFSET))(this, a1);
	}

	::Class_1_C6F4C4ABEDB8B5E9* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_C6F4C4ABEDB8B5E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79EE3670D2EC49A_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
