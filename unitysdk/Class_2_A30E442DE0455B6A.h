#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_A30E442DE0455B6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E93E00)
#define CLASS_2_A30E442DE0455B6A_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17E943D0)
#define CLASS_2_A30E442DE0455B6A_METHOD_2_3C081D06DA6B1B22_OFFSET UNITYSDK_OFFSET(0x17E93BD0)
#define CLASS_2_A30E442DE0455B6A_METHOD_2_8EB0B5A1956DA0FB_OFFSET UNITYSDK_OFFSET(0x17E93A20)
#define CLASS_2_A30E442DE0455B6A_METHOD_2_A69FA13B10FB80CC_OFFSET UNITYSDK_OFFSET(0x17E93C50)
#define CLASS_2_A30E442DE0455B6A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E94410)
#define CLASS_2_A30E442DE0455B6A_METHOD_2_CD22C8D257CCA11D_OFFSET UNITYSDK_OFFSET(0x17E94130)
#define CLASS_2_A30E442DE0455B6A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E93EE0)
#define CLASS_2_A30E442DE0455B6A__CTOR_OFFSET UNITYSDK_OFFSET(0x17E94120)

inline static constexpr unsigned int Class_2_A30E442DE0455B6A_TypeDefinitionIndex = 68173;

class Class_2_A30E442DE0455B6A : public ::MoleMole::RendererFader
{
public:
	::UnityEngine::Material* Field_2_6; // 0x28
	::System::String* Field_2_0; // 0x30
	::System::Single Field_2_7; // 0x38
	::System::Int32 Field_2_4; // 0x3C
	::System::Int32 Field_2_5; // 0x40
	::System::Single Field_2_11; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8EB0B5A1956DA0FB(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_METHOD_2_8EB0B5A1956DA0FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C081D06DA6B1B22(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_METHOD_2_3C081D06DA6B1B22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A69FA13B10FB80CC(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_METHOD_2_A69FA13B10FB80CC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_CD22C8D257CCA11D(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_METHOD_2_CD22C8D257CCA11D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A30E442DE0455B6A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
