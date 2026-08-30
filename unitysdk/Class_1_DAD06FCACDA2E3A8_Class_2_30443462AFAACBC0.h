#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1624D820)
#define CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1624D7D0)
#define CLASS_1_DAD06FCACDA2E3A8_CLASS_2_30443462AFAACBC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1624D8C0)

inline static constexpr unsigned int Class_1_DAD06FCACDA2E3A8_Class_2_30443462AFAACBC0_TypeDefinitionIndex = 72721;

class Class_1_DAD06FCACDA2E3A8_Class_2_30443462AFAACBC0 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::Transform* JCEEJLHEGIG; // 0x18
	::RPG::Client::LocalizedText* IEOMBELGGFD; // 0x20
	::UnityEngine::CanvasGroup* LHFEMKIHPLH; // 0x28

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
