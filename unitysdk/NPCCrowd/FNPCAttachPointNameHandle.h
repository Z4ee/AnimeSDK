#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_FNPCATTACHPOINTNAMEHANDLE_ISINVALID_OFFSET UNITYSDK_OFFSET(0x698660)
#define NPCCROWD_FNPCATTACHPOINTNAMEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFCBF50)
#define NPCCROWD_FNPCATTACHPOINTNAMEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define NPCCROWD_FNPCATTACHPOINTNAMEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x6985C0)

namespace NPCCrowd
{
	inline static constexpr unsigned int FNPCAttachPointNameHandle_TypeDefinitionIndex = 53223;

	struct alignas(4) FNPCAttachPointNameHandle
	{
		static ::System::Int32* StaticGet_INVALID_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNPCAttachPointNameHandle_TypeDefinitionIndex)->GetStaticField(0xFE20);
		}
		::System::Int32 NameHashID; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_FNPCATTACHPOINTNAMEHANDLE__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::Int32 hash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_FNPCATTACHPOINTNAMEHANDLE__CTOR_1_OFFSET))(this, hash);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_FNPCATTACHPOINTNAMEHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_FNPCATTACHPOINTNAMEHANDLE_ISINVALID_OFFSET))(this);
		}
	};
}
