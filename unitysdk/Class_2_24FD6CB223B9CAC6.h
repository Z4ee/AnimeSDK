#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_24FD6CB223B9CAC6_GET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0xA444200)
#define CLASS_2_24FD6CB223B9CAC6_METHOD_2_29CDD8C3D1007FD1_OFFSET UNITYSDK_OFFSET(0xA4442B0)
#define CLASS_2_24FD6CB223B9CAC6_METHOD_2_84E3E55CC5D48994_OFFSET UNITYSDK_OFFSET(0xA444340)
#define CLASS_2_24FD6CB223B9CAC6_SET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0xA4441F0)
#define CLASS_2_24FD6CB223B9CAC6__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0xA444210)
#define CLASS_2_24FD6CB223B9CAC6__CTOR_OFFSET UNITYSDK_OFFSET(0xA4443E0)

inline static constexpr unsigned int Class_2_24FD6CB223B9CAC6_TypeDefinitionIndex = 50986;

class Class_2_24FD6CB223B9CAC6 : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Boolean _IsLevelFirst_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24FD6CB223B9CAC6__CTOR_OFFSET))(this);
	}

	::System::Void set_IsLevelFirst(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24FD6CB223B9CAC6_SET_ISLEVELFIRST_OFFSET))(this, value);
	}

	::System::Boolean get_IsLevelFirst()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24FD6CB223B9CAC6_GET_ISLEVELFIRST_OFFSET))(this);
	}

	::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_24FD6CB223B9CAC6__COMPAREIMPL_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_29CDD8C3D1007FD1(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_24FD6CB223B9CAC6_METHOD_2_29CDD8C3D1007FD1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_84E3E55CC5D48994(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_24FD6CB223B9CAC6_METHOD_2_84E3E55CC5D48994_OFFSET))(a1, a2);
	}
};
