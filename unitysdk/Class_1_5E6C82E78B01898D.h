#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E6C82E78B01898D_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x14FFB990)
#define CLASS_1_5E6C82E78B01898D_METHOD_1_9B81246DEF75E299_OFFSET UNITYSDK_OFFSET(0x14FFBB40)
#define CLASS_1_5E6C82E78B01898D_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14FFC210)
#define CLASS_1_5E6C82E78B01898D_METHOD_1_C1AA6A6ABD873DEF_OFFSET UNITYSDK_OFFSET(0x14FFBBD0)
#define CLASS_1_5E6C82E78B01898D_METHOD_1_ECD74E823480E61A_OFFSET UNITYSDK_OFFSET(0x14FFBE00)
#define CLASS_1_5E6C82E78B01898D_METHOD_1_FF66108F24BC1298_OFFSET UNITYSDK_OFFSET(0x14FFBF20)
#define CLASS_1_5E6C82E78B01898D__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FFB8F0)

inline static constexpr unsigned int Class_1_5E6C82E78B01898D_TypeDefinitionIndex = 44033;

class Class_1_5E6C82E78B01898D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Cameras::VNoiseSettings*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Cameras::VNoiseSettings*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E6C82E78B01898D_TypeDefinitionIndex)->GetStaticField(0x33460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Cameras::VNoiseSettings* Method_1_C1AA6A6ABD873DEF(::Foundation::AssetPath a1)
	{
		return ((::MoleMole::Cameras::VNoiseSettings*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_METHOD_1_C1AA6A6ABD873DEF_OFFSET))(a1);
	}

	static ::System::Void Method_1_FF66108F24BC1298(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_METHOD_1_FF66108F24BC1298_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_ECD74E823480E61A(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Boolean, ::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_METHOD_1_ECD74E823480E61A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9B81246DEF75E299(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_METHOD_1_9B81246DEF75E299_OFFSET))(a1, a2);
	}
};
