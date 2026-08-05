#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_22AF1BA6B9A53CBF.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryBoneData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_778C0F467BB9F7F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C520C0)
#define CLASS_2_778C0F467BB9F7F9_METHOD_2_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x13C51390)
#define CLASS_2_778C0F467BB9F7F9_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x13C51780)
#define CLASS_2_778C0F467BB9F7F9_METHOD_2_5528DFFF3D752BB6_OFFSET UNITYSDK_OFFSET(0x13C518F0)
#define CLASS_2_778C0F467BB9F7F9_METHOD_2_B55D7D84DDFA02B6_OFFSET UNITYSDK_OFFSET(0x13C526A0)
#define CLASS_2_778C0F467BB9F7F9_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x13C52690)
#define CLASS_2_778C0F467BB9F7F9_METHOD_2_DFCB38E68E39E073_OFFSET UNITYSDK_OFFSET(0x13C51DF0)
#define CLASS_2_778C0F467BB9F7F9__CTOR_OFFSET UNITYSDK_OFFSET(0x13C52680)

inline static constexpr unsigned int Class_2_778C0F467BB9F7F9_TypeDefinitionIndex = 55206;

class Class_2_778C0F467BB9F7F9 : public ::Class_1_22AF1BA6B9A53CBF
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* Field_2_1; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_METHOD_2_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_B55D7D84DDFA02B6(::UnityEngine::SkinnedMeshRenderer* a1, ::MoleMole::Config::ConfigDynamicAccessoryBoneData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::MoleMole::Config::ConfigDynamicAccessoryBoneData*))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_METHOD_2_B55D7D84DDFA02B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5528DFFF3D752BB6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_METHOD_2_5528DFFF3D752BB6_OFFSET))(this);
	}

	::System::Void Method_2_DFCB38E68E39E073(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_METHOD_2_DFCB38E68E39E073_OFFSET))(this, a1);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_778C0F467BB9F7F9_METHOD_2_5176DC743E478510_OFFSET))(this);
	}
};
