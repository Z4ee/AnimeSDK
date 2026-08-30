#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1598DDB0)
#define CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1598DD60)
#define CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1598DE50)

inline static constexpr unsigned int Class_1_DAD06FCACDA2E3A8_Class_2_30443462AFAACBC0_TypeDefinitionIndex = 72720;

class Class_1_DAD06FCACDA2E3A8_Class_2_30443462AFAACBC0 : public ::Class_1_A167209E71412818
{
public:
	::RPG::Client::LocalizedText* IEOMBELGGFD; // 0x18
	::UnityEngine::CanvasGroup* LHFEMKIHPLH; // 0x20
	::UnityEngine::Transform* JCEEJLHEGIG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
