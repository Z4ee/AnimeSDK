#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertyAnimBehavior_MaterialProperty.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class MaterialPropertyAnimBehavior_MaterialPropertyContent; }
namespace RPG::Client { class MaterialPropertyAnimMonoPlugin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1A9FCFF0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A9FCC70)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1A9FCAF0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1A9FCB50)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1A9FCBB0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x1A9FCC10)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0x1A9FCCB0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A9FCA90)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A9FCA00)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_9D4AA0DDED7945FC_OFFSET UNITYSDK_OFFSET(0x1A9FD070)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1A9FCD10)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9FD240)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9FD230)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimBehavior_TypeDefinitionIndex = 67559;

	class MaterialPropertyAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::MaterialPropertyAnimBehavior_MaterialProperty, ::System::Int32>** StaticGet__MaterialPropertyDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::MaterialPropertyAnimBehavior_MaterialProperty, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyAnimBehavior_TypeDefinitionIndex)->GetStaticField(0x48B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::MaterialPropertyAnimMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MaterialPropertyAnimMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_9D4AA0DDED7945FC(::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_METHOD_3_9D4AA0DDED7945FC_OFFSET))(this, a1, a2);
		}
	};
}
