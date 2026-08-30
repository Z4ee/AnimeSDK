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

#define CLASS_1_9EC4E7AA0D2CB231_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7FE7F0)
#define CLASS_1_9EC4E7AA0D2CB231_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A7FF670)
#define CLASS_1_9EC4E7AA0D2CB231_GET_LOADPERCENT_OFFSET UNITYSDK_OFFSET(0x1A7FF680)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_01017BEF492003F5_OFFSET UNITYSDK_OFFSET(0x1A7FDEA0)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_07808132405C7B92_OFFSET UNITYSDK_OFFSET(0x1A7FE610)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x1A7FF280)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_0F66B7971F95E3AA_OFFSET UNITYSDK_OFFSET(0x1A7FF510)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0x1A7FE670)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_2F381734DBBAB430_OFFSET UNITYSDK_OFFSET(0x1A7FF3A0)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_50D73642B0090A52_OFFSET UNITYSDK_OFFSET(0x1A7FED00)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_748092984648CB10_OFFSET UNITYSDK_OFFSET(0x1A7FEAE0)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_80C8EBE69ABEE923_OFFSET UNITYSDK_OFFSET(0x1A7FE960)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_9EF2487FEEF4EB62_OFFSET UNITYSDK_OFFSET(0x1A7FEE80)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_AE650053425D3A93_OFFSET UNITYSDK_OFFSET(0x1A7FEC30)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_BD0208930C93BE06_OFFSET UNITYSDK_OFFSET(0x1A7FF040)
#define CLASS_1_9EC4E7AA0D2CB231_METHOD_1_F4B66BACD027A99D_OFFSET UNITYSDK_OFFSET(0x1A7FF0C0)
#define CLASS_1_9EC4E7AA0D2CB231_SET_LOADPERCENT_OFFSET UNITYSDK_OFFSET(0x1A7FF690)
#define CLASS_1_9EC4E7AA0D2CB231__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FDE40)

inline static constexpr unsigned int Class_1_9EC4E7AA0D2CB231_TypeDefinitionIndex = 69099;

class Class_1_9EC4E7AA0D2CB231 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AudienceGroupInstance*>* CCECMIKFAME; // 0x10
	::System::Single _LoadPercent_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x1C
	::System::Boolean MHEAIOMEGCA; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_01017BEF492003F5(::UnityEngine::Transform* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::LevelAudienceInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::IList_1<::RPG::GameCore::LevelAudienceInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_01017BEF492003F5_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_80C8EBE69ABEE923(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_80C8EBE69ABEE923_OFFSET))(this, a1);
	}

	::System::Void Method_1_748092984648CB10(::System::String* a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_748092984648CB10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_50D73642B0090A52(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_50D73642B0090A52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9EF2487FEEF4EB62(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_9EF2487FEEF4EB62_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4B66BACD027A99D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_F4B66BACD027A99D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::System::Void Method_1_265045B8E51327D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_265045B8E51327D0_OFFSET))(this);
	}

	::System::Void Method_1_2F381734DBBAB430()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_2F381734DBBAB430_OFFSET))(this);
	}

	::System::Void Method_1_0F66B7971F95E3AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_0F66B7971F95E3AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_07808132405C7B92(::RPG::Client::AudienceGroupInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_07808132405C7B92_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE650053425D3A93(::RPG::Client::AudienceGroupInstance* a1, ::System::String* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*, ::System::String*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_AE650053425D3A93_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BD0208930C93BE06(::RPG::Client::AudienceGroupInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceGroupInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_METHOD_1_BD0208930C93BE06_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_GET_ID_OFFSET))(this);
	}

	::System::Single get_LoadPercent()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_GET_LOADPERCENT_OFFSET))(this);
	}

	::System::Void set_LoadPercent(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EC4E7AA0D2CB231_SET_LOADPERCENT_OFFSET))(this, a1);
	}
};
