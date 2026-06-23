#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_449;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x12BDF530)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_2506EF039A3DF659_OFFSET UNITYSDK_OFFSET(0x12BDFA60)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x12BDFD60)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_9AC8CB4044A83CFD_OFFSET UNITYSDK_OFFSET(0x12BDF5F0)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_B53EC42A1BFA44C9_OFFSET UNITYSDK_OFFSET(0x12BDF830)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_BCA38E9C14DEEBD8_OFFSET UNITYSDK_OFFSET(0x12BDF770)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x12BDFA20)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_SET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x12BDF540)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDF550)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int DefaultDynamicObjectLayer_TypeDefinitionIndex = 62901;

	class DefaultDynamicObjectLayer : public ::System::Object
	{
	public:
		::System::String* _layerName_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_449*>* ObjectMap; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_layerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_GET_LAYERNAME_OFFSET))(this);
		}

		::System::Void set_layerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_SET_LAYERNAME_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_449* Method_1_9AC8CB4044A83CFD(::MoleMole::GameplayTag a1)
		{
			return ((::Class_0_16E4307DCC419505_449*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_9AC8CB4044A83CFD_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_BCA38E9C14DEEBD8(::MoleMole::GameplayTag a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_BCA38E9C14DEEBD8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B53EC42A1BFA44C9(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_B53EC42A1BFA44C9_OFFSET))(this, a1);
		}

		::System::String* Method_1_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_1_2506EF039A3DF659(::Class_0_16E4307DCC419505_449* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_449*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_2506EF039A3DF659_OFFSET))(this, a1);
		}

		::System::Void Method_1_2F0F99A12DB93F30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
		}
	};
}
