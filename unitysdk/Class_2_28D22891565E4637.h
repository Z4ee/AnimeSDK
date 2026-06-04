#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_567;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_28D22891565E4637_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106466F0)
#define CLASS_2_28D22891565E4637_METHOD_2_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x10645F80)
#define CLASS_2_28D22891565E4637_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10645F00)
#define CLASS_2_28D22891565E4637_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x10646A90)
#define CLASS_2_28D22891565E4637_METHOD_2_4972B4CF1E9A3BDE_OFFSET UNITYSDK_OFFSET(0x10646E50)
#define CLASS_2_28D22891565E4637_METHOD_2_8C68E2CDEEC884A6_OFFSET UNITYSDK_OFFSET(0x10646EE0)
#define CLASS_2_28D22891565E4637_METHOD_2_A73723E337956266_OFFSET UNITYSDK_OFFSET(0x10645AE0)
#define CLASS_2_28D22891565E4637_METHOD_2_A7E10B3DDAF18E7F_OFFSET UNITYSDK_OFFSET(0x10646C30)
#define CLASS_2_28D22891565E4637_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x106469F0)
#define CLASS_2_28D22891565E4637_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x10645D30)
#define CLASS_2_28D22891565E4637_METHOD_2_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0x10646DC0)
#define CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0x10646430)
#define CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x10645BD0)
#define CLASS_2_28D22891565E4637_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x10646590)
#define CLASS_2_28D22891565E4637_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x10646950)
#define CLASS_2_28D22891565E4637_METHOD_2_F2C8A9D880BBBF6E_OFFSET UNITYSDK_OFFSET(0x10645990)
#define CLASS_2_28D22891565E4637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10645700)
#define CLASS_2_28D22891565E4637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x106463D0)
#define CLASS_2_28D22891565E4637_TICK_OFFSET UNITYSDK_OFFSET(0x10646810)
#define CLASS_2_28D22891565E4637__CTOR_OFFSET UNITYSDK_OFFSET(0x10645500)

inline static constexpr unsigned int Class_2_28D22891565E4637_TypeDefinitionIndex = 54465;

class Class_2_28D22891565E4637 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_0_16E4307DCC419505_567* Field_2_1; // 0x18
	::RPG::GameCore::PlayMunicipalChat* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_5; // 0x38
	::Il2CppArray<::RPG::GameCore::MunicipalChatEntityInfo*>* Field_2_6; // 0x40
	::System::Object* Field_2_7; // 0x48
	::System::String* Field_2_8; // 0x50
	::System::Boolean Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x59
	::RPG::GameCore::StringHash Field_2_11; // 0x5C
	::System::Single Field_2_12; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F2C8A9D880BBBF6E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_F2C8A9D880BBBF6E_OFFSET))(this);
	}

	::System::Single Method_2_A73723E337956266()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_A73723E337956266_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7E10B3DDAF18E7F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_A7E10B3DDAF18E7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_DFD7F5C5419FD422_OFFSET))(this, a1);
	}

	::System::Void Method_2_4972B4CF1E9A3BDE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_4972B4CF1E9A3BDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C68E2CDEEC884A6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_8C68E2CDEEC884A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_21886A8411E71157_OFFSET))(this);
	}
};
