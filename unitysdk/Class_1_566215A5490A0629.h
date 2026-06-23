#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D840400A176259F3;

#define CLASS_1_566215A5490A0629_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x11FCD650)
#define CLASS_1_566215A5490A0629_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x11FCD5F0)
#define CLASS_1_566215A5490A0629_INIT_OFFSET UNITYSDK_OFFSET(0x11FCD960)
#define CLASS_1_566215A5490A0629_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x11FCD9D0)
#define CLASS_1_566215A5490A0629_ONSYNC_OFFSET UNITYSDK_OFFSET(0x11FCD7F0)
#define CLASS_1_566215A5490A0629_POLISH_OFFSET UNITYSDK_OFFSET(0x11FCD890)
#define CLASS_1_566215A5490A0629_RECYCLE_OFFSET UNITYSDK_OFFSET(0x11FCD8D0)
#define CLASS_1_566215A5490A0629__CTOR_OFFSET UNITYSDK_OFFSET(0x11FCD9C0)

inline static constexpr unsigned int Class_1_566215A5490A0629_TypeDefinitionIndex = 58050;

class Class_1_566215A5490A0629 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_COMPUTESYNC_OFFSET))(this, a1, a2);
	}

	::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_APPLYSYNCTOWWISE_OFFSET))(this, a1);
	}

	::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_566215A5490A0629* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_566215A5490A0629*(*)())((::PBYTE)hIl2Cpp + CLASS_1_566215A5490A0629_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
