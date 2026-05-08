#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define CLASS_3_FE5EF57F11214997_METHOD_3_02866C8ED9B0638C_OFFSET UNITYSDK_OFFSET(0x16571200)
#define CLASS_3_FE5EF57F11214997_METHOD_3_3AD407DB55E3F156_OFFSET UNITYSDK_OFFSET(0x1656F8D0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_4274E67E41790DE6_OFFSET UNITYSDK_OFFSET(0x1656FEE0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_4AF0FB320C997F2A_OFFSET UNITYSDK_OFFSET(0x16571DE0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_715F6CAC814D1467_1_OFFSET UNITYSDK_OFFSET(0x16571E00)
#define CLASS_3_FE5EF57F11214997_METHOD_3_715F6CAC814D1467_OFFSET UNITYSDK_OFFSET(0x16571DD0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_76CA175EA83B1FF6_OFFSET UNITYSDK_OFFSET(0x1656E860)
#define CLASS_3_FE5EF57F11214997_METHOD_3_B1660B035151681D_1_OFFSET UNITYSDK_OFFSET(0x16571E50)
#define CLASS_3_FE5EF57F11214997_METHOD_3_B1660B035151681D_OFFSET UNITYSDK_OFFSET(0x16571DF0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x16571E10)
#define CLASS_3_FE5EF57F11214997_METHOD_3_D796C5CBF5DD843C_OFFSET UNITYSDK_OFFSET(0x1656F3A0)
#define CLASS_3_FE5EF57F11214997_METHOD_3_FAB6E62826A10BBD_OFFSET UNITYSDK_OFFSET(0x165708D0)
#define CLASS_3_FE5EF57F11214997_TOSTRING_OFFSET UNITYSDK_OFFSET(0x165716D0)
#define CLASS_3_FE5EF57F11214997__CTOR_OFFSET UNITYSDK_OFFSET(0x1656E740)

inline static constexpr unsigned int Class_3_FE5EF57F11214997_TypeDefinitionIndex = 41158;

class Class_3_FE5EF57F11214997 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::SplitToning*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_2; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB8
	::UnityEngine::Color Field_3_3; // 0xC0
	::System::Single Field_3_5; // 0xD0
	::UnityEngine::Color Field_3_1; // 0xD4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntitySplitToningEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_76CA175EA83B1FF6(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_76CA175EA83B1FF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D796C5CBF5DD843C(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_D796C5CBF5DD843C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3AD407DB55E3F156(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_3AD407DB55E3F156_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4274E67E41790DE6(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_4274E67E41790DE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FAB6E62826A10BBD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_FAB6E62826A10BBD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_02866C8ED9B0638C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_02866C8ED9B0638C_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_715F6CAC814D1467(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_715F6CAC814D1467_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4AF0FB320C997F2A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_4AF0FB320C997F2A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B1660B035151681D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_B1660B035151681D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_715F6CAC814D1467_1(::UnityEngine::Rendering::Universal::SplitToning* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SplitToning*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_715F6CAC814D1467_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_B1660B035151681D_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::SplitToning* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::SplitToning*))((::PBYTE)hIl2Cpp + CLASS_3_FE5EF57F11214997_METHOD_3_B1660B035151681D_1_OFFSET))(this, a1, a2);
	}
};
