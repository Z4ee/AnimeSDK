#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AudienceGroupInstance; }
namespace RPG::GameCore { class LevelAudienceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8459F1A1E96764A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114E2440)
#define CLASS_1_8459F1A1E96764A3_GET_ID_OFFSET UNITYSDK_OFFSET(0x114E3330)
#define CLASS_1_8459F1A1E96764A3_GET_LOADPERCENT_OFFSET UNITYSDK_OFFSET(0x114E3340)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_01017BEF492003F5_OFFSET UNITYSDK_OFFSET(0x114E1CB0)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_05CFE24596F8616C_OFFSET UNITYSDK_OFFSET(0x114E31B0)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_07808132405C7B92_OFFSET UNITYSDK_OFFSET(0x114E2250)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x114E22B0)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_411394E2349F93CE_OFFSET UNITYSDK_OFFSET(0x114E3040)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_4421460332FD20FF_OFFSET UNITYSDK_OFFSET(0x114E2D20)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_538B9B2411833310_OFFSET UNITYSDK_OFFSET(0x114E2CA0)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x114E2EF0)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_90E35F216304F712_OFFSET UNITYSDK_OFFSET(0x114E2760)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_A83DEB331B8397A0_OFFSET UNITYSDK_OFFSET(0x114E28C0)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_B093065D1BF8CA13_OFFSET UNITYSDK_OFFSET(0x114E2970)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_D66925FFC39F6DB2_OFFSET UNITYSDK_OFFSET(0x114E2B00)
#define CLASS_1_8459F1A1E96764A3_METHOD_1_FBC0A06AC3E7852B_OFFSET UNITYSDK_OFFSET(0x114E25D0)
#define CLASS_1_8459F1A1E96764A3_SET_LOADPERCENT_OFFSET UNITYSDK_OFFSET(0x114E3350)
#define CLASS_1_8459F1A1E96764A3__CTOR_OFFSET UNITYSDK_OFFSET(0x114E1C50)

inline static constexpr unsigned int Class_1_8459F1A1E96764A3_TypeDefinitionIndex = 56494;

class Class_1_8459F1A1E96764A3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AudienceGroupInstance*>* Field_1_3; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x1C
	::System::Single _LoadPercent_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_01017BEF492003F5(::UnityEngine::Transform* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::LevelAudienceInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::IList_1<::RPG::GameCore::LevelAudienceInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_01017BEF492003F5_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FBC0A06AC3E7852B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_FBC0A06AC3E7852B_OFFSET))(this, a1);
	}

	::System::Void Method_1_90E35F216304F712(::System::String* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_90E35F216304F712_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B093065D1BF8CA13(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_B093065D1BF8CA13_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D66925FFC39F6DB2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_D66925FFC39F6DB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_4421460332FD20FF(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_4421460332FD20FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_1_411394E2349F93CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_411394E2349F93CE_OFFSET))(this);
	}

	::System::Void Method_1_05CFE24596F8616C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_05CFE24596F8616C_OFFSET))(this, a1);
	}

	::System::Void Method_1_07808132405C7B92(::RPG::Client::AudienceGroupInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_07808132405C7B92_OFFSET))(this, a1);
	}

	::System::Void Method_1_A83DEB331B8397A0(::RPG::Client::AudienceGroupInstance* a1, ::System::String* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_A83DEB331B8397A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_538B9B2411833310(::RPG::Client::AudienceGroupInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_METHOD_1_538B9B2411833310_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_GET_ID_OFFSET))(this);
	}

	::System::Single get_LoadPercent()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_GET_LOADPERCENT_OFFSET))(this);
	}

	::System::Void set_LoadPercent(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8459F1A1E96764A3_SET_LOADPERCENT_OFFSET))(this, value);
	}
};
