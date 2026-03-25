#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

class Class_1_0D4B763E40BF8CFF;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_791CB467786D8BD6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE455A10)
#define CLASS_1_791CB467786D8BD6_METHOD_1_003BD591B1C368CB_OFFSET UNITYSDK_OFFSET(0xE457BD0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_09F857D29ECA6E2A_OFFSET UNITYSDK_OFFSET(0xE4567B0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_24C626E09E18A8A0_OFFSET UNITYSDK_OFFSET(0xE455D80)
#define CLASS_1_791CB467786D8BD6_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xE4557D0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_4865799AAF76930A_OFFSET UNITYSDK_OFFSET(0xE4574C0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_538BE8A7329B21AC_OFFSET UNITYSDK_OFFSET(0xE457680)
#define CLASS_1_791CB467786D8BD6_METHOD_1_67F4204E24FCEC7D_OFFSET UNITYSDK_OFFSET(0xE456F10)
#define CLASS_1_791CB467786D8BD6_METHOD_1_7FC3CEAD096F87F8_OFFSET UNITYSDK_OFFSET(0xE455730)
#define CLASS_1_791CB467786D8BD6_METHOD_1_87D9AD9D5C50B4D9_OFFSET UNITYSDK_OFFSET(0xE456440)
#define CLASS_1_791CB467786D8BD6_METHOD_1_88270C2640C14535_OFFSET UNITYSDK_OFFSET(0xE455BF0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_9FBADBC808C7E6E1_OFFSET UNITYSDK_OFFSET(0xE456130)
#define CLASS_1_791CB467786D8BD6_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0xE455880)
#define CLASS_1_791CB467786D8BD6_METHOD_1_B32AE923D9AD8630_OFFSET UNITYSDK_OFFSET(0xE456360)
#define CLASS_1_791CB467786D8BD6_METHOD_1_B51DDBA0992433B6_OFFSET UNITYSDK_OFFSET(0xE456740)
#define CLASS_1_791CB467786D8BD6_METHOD_1_B65AC51B2FA83B37_OFFSET UNITYSDK_OFFSET(0xE455F80)
#define CLASS_1_791CB467786D8BD6_METHOD_1_C58932284750650A_OFFSET UNITYSDK_OFFSET(0xE456BF0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_C591C277A256E6BF_OFFSET UNITYSDK_OFFSET(0xE4571E0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_C7E5C4E794DE8FAC_OFFSET UNITYSDK_OFFSET(0xE457360)
#define CLASS_1_791CB467786D8BD6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE455B80)
#define CLASS_1_791CB467786D8BD6_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xE455A60)
#define CLASS_1_791CB467786D8BD6_METHOD_1_D458C0B2682F3322_OFFSET UNITYSDK_OFFSET(0xE455FE0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_D7A684E848304BB4_OFFSET UNITYSDK_OFFSET(0xE456480)
#define CLASS_1_791CB467786D8BD6_METHOD_1_DA5E5B7607DD3177_OFFSET UNITYSDK_OFFSET(0xE456FB0)
#define CLASS_1_791CB467786D8BD6_METHOD_1_E08EC42302D545B3_OFFSET UNITYSDK_OFFSET(0xE455D30)
#define CLASS_1_791CB467786D8BD6_METHOD_1_F1B82A12429A21BF_OFFSET UNITYSDK_OFFSET(0xE456660)
#define CLASS_1_791CB467786D8BD6_METHOD_1_F72BC937B893688C_OFFSET UNITYSDK_OFFSET(0xE456F50)
#define CLASS_1_791CB467786D8BD6__CTOR_OFFSET UNITYSDK_OFFSET(0xE455980)
#define CLASS_1_791CB467786D8BD6__TRYASYNCSHOWUIFROMENTRANCE_B__28_0_OFFSET UNITYSDK_OFFSET(0xE457C20)

inline static constexpr unsigned int Class_1_791CB467786D8BD6_TypeDefinitionIndex = 62217;

class Class_1_791CB467786D8BD6 : public ::System::Object
{
public:
	::RPG::Client::LuaUIGameFlowContext* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CakeRace::CakeRaceUIType, ::RPG::Client::LuaUIGameFlowContext*>* Field_1_0; // 0x18
	::RPG::Client::Promises::IPromise* Field_1_3; // 0x20
	::RPG::Client::Promises::IPromise* Field_1_4; // 0x28
	::RPG::Client::CakeRace::CakeRaceUIType Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6__CTOR_OFFSET))(this);
	}

	::RPG::Client::CakeRace::CakeRaceGameFlow* Method_1_7FC3CEAD096F87F8()
	{
		return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_7FC3CEAD096F87F8_OFFSET))(this);
	}

	::Class_1_0D4B763E40BF8CFF* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_0D4B763E40BF8CFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	static ::Class_1_791CB467786D8BD6* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_791CB467786D8BD6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_E08EC42302D545B3(::RPG::Client::LuaUIGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_E08EC42302D545B3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B65AC51B2FA83B37(::RPG::Client::LuaUIGameFlowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_B65AC51B2FA83B37_OFFSET))(this, a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_D458C0B2682F3322(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_D458C0B2682F3322_OFFSET))(this, a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_9FBADBC808C7E6E1(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_9FBADBC808C7E6E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B32AE923D9AD8630(::RPG::Client::LuaUIGameFlowContext*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*&))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_B32AE923D9AD8630_OFFSET))(this, a1);
	}

	::System::Void Method_1_88270C2640C14535(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_88270C2640C14535_OFFSET))(this, a1);
	}

	::System::Void Method_1_24C626E09E18A8A0(::RPG::Client::LuaUIGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_24C626E09E18A8A0_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_87D9AD9D5C50B4D9(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::String*(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_87D9AD9D5C50B4D9_OFFSET))(a1);
	}

	static ::System::String* Method_1_D7A684E848304BB4(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::String*(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_D7A684E848304BB4_OFFSET))(a1);
	}

	static ::RPG::Client::UILayer Method_1_F1B82A12429A21BF(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::RPG::Client::UILayer(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_F1B82A12429A21BF_OFFSET))(a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_B51DDBA0992433B6(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_B51DDBA0992433B6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_09F857D29ECA6E2A(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_09F857D29ECA6E2A_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_C58932284750650A(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_C58932284750650A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_67F4204E24FCEC7D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_67F4204E24FCEC7D_OFFSET))(this);
	}

	::System::Boolean Method_1_F72BC937B893688C(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_F72BC937B893688C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* Method_1_DA5E5B7607DD3177(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_DA5E5B7607DD3177_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_C591C277A256E6BF(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_C591C277A256E6BF_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* Method_1_C7E5C4E794DE8FAC(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_C7E5C4E794DE8FAC_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_4865799AAF76930A(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_4865799AAF76930A_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_538BE8A7329B21AC(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_538BE8A7329B21AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_003BD591B1C368CB(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6_METHOD_1_003BD591B1C368CB_OFFSET))(this, a1);
	}

	::System::Void _TryAsyncShowUIFromEntrance_b__28_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6__TRYASYNCSHOWUIFROMENTRANCE_B__28_0_OFFSET))(this);
	}
};
