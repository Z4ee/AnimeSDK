#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace MoleMole::Config { template <typename T> class ConfigShaderCustomBaseMap_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_967B82E19A28CF3F_METHOD_1_2A2A9FD85678D7DB_OFFSET UNITYSDK_OFFSET(0x12BB2E50)
#define CLASS_1_967B82E19A28CF3F_METHOD_1_4A5D7241C9C03E2F_OFFSET UNITYSDK_OFFSET(0x12BB28C0)
#define CLASS_1_967B82E19A28CF3F_METHOD_1_525AEBDE8C727B6A_OFFSET UNITYSDK_OFFSET(0x12BB24A0)
#define CLASS_1_967B82E19A28CF3F_METHOD_1_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x12BB2F60)
#define CLASS_1_967B82E19A28CF3F_METHOD_1_A7347C60C9B0C930_OFFSET UNITYSDK_OFFSET(0x12BB2760)
#define CLASS_1_967B82E19A28CF3F_METHOD_1_BA3FF423D670F592_OFFSET UNITYSDK_OFFSET(0x12BB2B00)
#define CLASS_1_967B82E19A28CF3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB2400)

inline static constexpr unsigned int Class_1_967B82E19A28CF3F_TypeDefinitionIndex = 60572;

class Class_1_967B82E19A28CF3F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_967B82E19A28CF3F_TypeDefinitionIndex)->GetStaticField(0x3D5C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_525AEBDE8C727B6A(::MoleMole::Config::ShaderCustomType a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_METHOD_1_525AEBDE8C727B6A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>* Method_1_A7347C60C9B0C930(::MoleMole::Config::ShaderCustomType a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*(*)(::MoleMole::Config::ShaderCustomType))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_METHOD_1_A7347C60C9B0C930_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigShaderCustomBase* Method_1_4A5D7241C9C03E2F(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::MoleMole::Config::ShaderCustomType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_METHOD_1_4A5D7241C9C03E2F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA3FF423D670F592(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_METHOD_1_BA3FF423D670F592_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A2A9FD85678D7DB(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_METHOD_1_2A2A9FD85678D7DB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_704FAC4600717444()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_METHOD_1_704FAC4600717444_OFFSET))();
	}
};
