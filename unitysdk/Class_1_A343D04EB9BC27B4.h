#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A343D04EB9BC27B4_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xF63EB60)
#define CLASS_1_A343D04EB9BC27B4_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xF63E9F0)
#define CLASS_1_A343D04EB9BC27B4_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xF63ED80)
#define CLASS_1_A343D04EB9BC27B4_METHOD_1_F0C125B61A44BBEC_OFFSET UNITYSDK_OFFSET(0xF63E9A0)

inline static constexpr unsigned int Class_1_A343D04EB9BC27B4_TypeDefinitionIndex = 49498;

class Class_1_A343D04EB9BC27B4 : public ::System::Object
{
public:
	static ::MoleMole::HollowEntityLayerMaskConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::HollowEntityLayerMaskConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A343D04EB9BC27B4_TypeDefinitionIndex)->GetStaticField(0x3D9C0);
	}

	static ::MoleMole::HollowEntityLayerMaskConfig* Method_1_F0C125B61A44BBEC()
	{
		return ((::MoleMole::HollowEntityLayerMaskConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_F0C125B61A44BBEC_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
