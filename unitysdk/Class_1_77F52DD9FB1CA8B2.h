#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_77F52DD9FB1CA8B2_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x12C45740)
#define CLASS_1_77F52DD9FB1CA8B2_METHOD_1_2518BF92D56C922A_OFFSET UNITYSDK_OFFSET(0x12C45A40)
#define CLASS_1_77F52DD9FB1CA8B2_METHOD_1_7C98DD926AF47E8B_OFFSET UNITYSDK_OFFSET(0x12C45A90)
#define CLASS_1_77F52DD9FB1CA8B2_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x12C45950)
#define CLASS_1_77F52DD9FB1CA8B2__CTOR_OFFSET UNITYSDK_OFFSET(0x12C45730)

inline static constexpr unsigned int Class_1_77F52DD9FB1CA8B2_TypeDefinitionIndex = 89806;

class Class_1_77F52DD9FB1CA8B2 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigFixedCameraEntry** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigFixedCameraEntry**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77F52DD9FB1CA8B2_TypeDefinitionIndex)->GetStaticField(0x4BC80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigFixedCameraEntry* Method_1_2518BF92D56C922A()
	{
		return ((::MoleMole::Config::ConfigFixedCameraEntry*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_METHOD_1_2518BF92D56C922A_OFFSET))();
	}

	static ::MoleMole::Cameras::FixedCameraConfig* Method_1_7C98DD926AF47E8B(::System::String* a1)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_METHOD_1_7C98DD926AF47E8B_OFFSET))(a1);
	}
};
