#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_07ADE0A35A9DF223_Class_3_C45EB1E2BA95C560_1;
class Class_1_07ADE0A35A9DF223_Class_3_E979A79DC5DC3542;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_07ADE0A35A9DF223_EXECUTE_OFFSET UNITYSDK_OFFSET(0x163D7550)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_0F3D59CED568B39A_OFFSET UNITYSDK_OFFSET(0x163D8B00)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_1CA38031E1DB50D5_OFFSET UNITYSDK_OFFSET(0x163D8E60)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_25678526567B115F_OFFSET UNITYSDK_OFFSET(0x163D7E40)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_61113270C4B9E4F4_OFFSET UNITYSDK_OFFSET(0x163D75A0)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_7771106B36A840EC_OFFSET UNITYSDK_OFFSET(0x163D83C0)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_79A2B781959C8590_OFFSET UNITYSDK_OFFSET(0x163D8640)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_7FBA19736CF767B2_OFFSET UNITYSDK_OFFSET(0x163D8DE0)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x163D7830)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_C9072C01C81FE8E4_OFFSET UNITYSDK_OFFSET(0x163D7D50)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_F255EADAB0916A2E_OFFSET UNITYSDK_OFFSET(0x163D8D80)
#define CLASS_1_07ADE0A35A9DF223_METHOD_1_F2FD9A847CFEB82D_OFFSET UNITYSDK_OFFSET(0x163D7040)
#define CLASS_1_07ADE0A35A9DF223_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x163D70A0)
#define CLASS_1_07ADE0A35A9DF223__CTOR_OFFSET UNITYSDK_OFFSET(0x163D6B70)

inline static constexpr unsigned int Class_1_07ADE0A35A9DF223_TypeDefinitionIndex = 76447;

class Class_1_07ADE0A35A9DF223 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* PLLJFOPBEKM; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x18
	::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::Int32>*>* LJFJBCMHFOG; // 0x20
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* FHLEGBOMNBG; // 0x28
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_07ADE0A35A9DF223_Class_3_E979A79DC5DC3542*>* COHKOODDAHI; // 0x30
	::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* AKIHODHPEKG; // 0x38
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_07ADE0A35A9DF223_Class_3_C45EB1E2BA95C560_1*>* GFIPFGJPHHI; // 0x40
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x48

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C9072C01C81FE8E4(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_C9072C01C81FE8E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F2FD9A847CFEB82D(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_F2FD9A847CFEB82D_OFFSET))(this, a1);
	}

	::System::Void Method_1_25678526567B115F(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_25678526567B115F_OFFSET))(this, a1);
	}

	::System::Void Method_1_7771106B36A840EC(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_7771106B36A840EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_79A2B781959C8590(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_79A2B781959C8590_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F3D59CED568B39A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_0F3D59CED568B39A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F255EADAB0916A2E(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_F255EADAB0916A2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FBA19736CF767B2(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_7FBA19736CF767B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1CA38031E1DB50D5(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_1CA38031E1DB50D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_61113270C4B9E4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_61113270C4B9E4F4_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07ADE0A35A9DF223_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}
};
