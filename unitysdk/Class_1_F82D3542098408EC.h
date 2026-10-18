#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sofa { class BaseSofaControl; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F82D3542098408EC_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15587D60)
#define CLASS_1_F82D3542098408EC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15587790)
#define CLASS_1_F82D3542098408EC_METHOD_1_4A639FB33ECDB327_OFFSET UNITYSDK_OFFSET(0x155877F0)
#define CLASS_1_F82D3542098408EC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15587740)
#define CLASS_1_F82D3542098408EC_METHOD_1_AB18BE3B9EC4409D_OFFSET UNITYSDK_OFFSET(0x15587A40)
#define CLASS_1_F82D3542098408EC_METHOD_1_BD81B9A3858A8961_OFFSET UNITYSDK_OFFSET(0x15587570)
#define CLASS_1_F82D3542098408EC_METHOD_1_C31680EF6455EB1F_OFFSET UNITYSDK_OFFSET(0x155879A0)
#define CLASS_1_F82D3542098408EC_METHOD_1_D770E0C909AD04CD_OFFSET UNITYSDK_OFFSET(0x15587E00)
#define CLASS_1_F82D3542098408EC_METHOD_1_EA355574F514C741_OFFSET UNITYSDK_OFFSET(0x15587B70)
#define CLASS_1_F82D3542098408EC__CTOR_OFFSET UNITYSDK_OFFSET(0x155873F0)

inline static constexpr unsigned int Class_1_F82D3542098408EC_TypeDefinitionIndex = 50024;

class Class_1_F82D3542098408EC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* GKGOPMJCPKA; // 0x10
	::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* IHEJBJCEAJA; // 0x18
	::System::Collections::Generic::HashSet_1<::Sofa::BaseSofaControl*>* LDMJPBNNHNM; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_4A639FB33ECDB327(::System::Type* a1, ::Sofa::BaseSofaControl*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::Sofa::BaseSofaControl*&))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_4A639FB33ECDB327_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AB18BE3B9EC4409D(::Sofa::BaseSofaControl* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_AB18BE3B9EC4409D_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA355574F514C741()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_EA355574F514C741_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	static ::System::Void Method_1_BD81B9A3858A8961(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>*))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_BD81B9A3858A8961_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D770E0C909AD04CD(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_D770E0C909AD04CD_OFFSET))(a1);
	}

	static ::System::Void Method_1_C31680EF6455EB1F(::Sofa::BaseSofaControl* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Sofa::BaseSofaControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F82D3542098408EC_METHOD_1_C31680EF6455EB1F_OFFSET))(a1, a2);
	}
};
