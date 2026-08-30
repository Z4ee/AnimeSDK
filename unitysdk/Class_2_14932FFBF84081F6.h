#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"

class Class_2_4346854BFC7E4C60;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }

#define CLASS_2_14932FFBF84081F6_CLEAR_OFFSET UNITYSDK_OFFSET(0x16130650)
#define CLASS_2_14932FFBF84081F6_METHOD_2_136784AAB372F525_OFFSET UNITYSDK_OFFSET(0x16130840)
#define CLASS_2_14932FFBF84081F6_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x16130760)
#define CLASS_2_14932FFBF84081F6_METHOD_2_3AD3A036F948F3DA_OFFSET UNITYSDK_OFFSET(0x16130AF0)
#define CLASS_2_14932FFBF84081F6_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x161310C0)
#define CLASS_2_14932FFBF84081F6_METHOD_2_539A95FDFDF6C673_OFFSET UNITYSDK_OFFSET(0x16130E40)
#define CLASS_2_14932FFBF84081F6_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x161307D0)
#define CLASS_2_14932FFBF84081F6_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16130CD0)
#define CLASS_2_14932FFBF84081F6_METHOD_2_D16C3D7D2A005C41_OFFSET UNITYSDK_OFFSET(0x16130B50)
#define CLASS_2_14932FFBF84081F6_METHOD_2_EC48F1CC23D7B630_OFFSET UNITYSDK_OFFSET(0x16130D80)
#define CLASS_2_14932FFBF84081F6__CTOR_OFFSET UNITYSDK_OFFSET(0x16130640)

inline static constexpr unsigned int Class_2_14932FFBF84081F6_TypeDefinitionIndex = 73697;

class Class_2_14932FFBF84081F6 : public ::Class_1_8A6989C352B0F0F0
{
public:
	::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x80
	::System::UInt32 DLBFBBNDFBO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	static ::RPG::Client::TriggerEffectParams* Method_2_136784AAB372F525(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_136784AAB372F525_OFFSET))(a1);
	}

	::RPG::Client::TriggerEffectParams* Method_2_3AD3A036F948F3DA()
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_3AD3A036F948F3DA_OFFSET))(this);
	}

	::System::Void Method_2_D16C3D7D2A005C41(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_D16C3D7D2A005C41_OFFSET))(this, a1);
	}

	::System::Void Method_2_539A95FDFDF6C673(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_539A95FDFDF6C673_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_EC48F1CC23D7B630(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_14932FFBF84081F6_METHOD_2_EC48F1CC23D7B630_OFFSET))(this, a1, a2);
	}
};
