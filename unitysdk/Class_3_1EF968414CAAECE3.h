#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_CFB7A3C91FBAC44A;
class Class_2_C3D82D0D1B9FA8D4;
class Class_3_387BDAC12AFE15BA;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCharacterAttachment; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_1EF968414CAAECE3_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF1FB9B0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_0510679EA0BDFE40_OFFSET UNITYSDK_OFFSET(0xF1FEFE0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_2897813958CD4E98_OFFSET UNITYSDK_OFFSET(0xF1FF8B0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_2C5CBB801D52E11F_OFFSET UNITYSDK_OFFSET(0xF1FE260)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_3103CACE47834A91_OFFSET UNITYSDK_OFFSET(0xF1FFC10)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_7F479C51A6BB116C_OFFSET UNITYSDK_OFFSET(0xF1FC280)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_8767DC4E6B381BBD_OFFSET UNITYSDK_OFFSET(0xF1FEF20)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_9193255C44DE1FEC_OFFSET UNITYSDK_OFFSET(0xF1FEE70)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_A869048548FCB420_OFFSET UNITYSDK_OFFSET(0xF1FD230)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_AF0F173150EA5302_OFFSET UNITYSDK_OFFSET(0xF1FC520)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xF1FE5B0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_BC710BFD9E4F5D17_OFFSET UNITYSDK_OFFSET(0xF1FD930)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_C89900CBCE660733_OFFSET UNITYSDK_OFFSET(0xF1FD4A0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF1FBF30)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_CDAB4E4E69D7A9F5_OFFSET UNITYSDK_OFFSET(0xF1FF070)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_D0C1D692DD15FEA7_OFFSET UNITYSDK_OFFSET(0xF1FD990)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_D1BC2CB27E2034B7_OFFSET UNITYSDK_OFFSET(0xF1FBFC0)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_E7D88B38D110565D_OFFSET UNITYSDK_OFFSET(0xF1FE640)
#define CLASS_3_1EF968414CAAECE3_METHOD_3_EE0CFF7F6F24BA6C_OFFSET UNITYSDK_OFFSET(0xF1FD010)
#define CLASS_3_1EF968414CAAECE3_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0xF1FBD80)
#define CLASS_3_1EF968414CAAECE3__CTOR_OFFSET UNITYSDK_OFFSET(0xF1FBEE0)

inline static constexpr unsigned int Class_3_1EF968414CAAECE3_TypeDefinitionIndex = 45677;

class Class_3_1EF968414CAAECE3 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_POSTSIMULATIONUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_D1BC2CB27E2034B7(::Class_3_387BDAC12AFE15BA* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_D1BC2CB27E2034B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7F479C51A6BB116C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_7F479C51A6BB116C_OFFSET))(a1);
	}

	static ::System::Void Method_3_AF0F173150EA5302(::MoleMole::CharacterScriptConfig* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::CharacterScriptConfig*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_AF0F173150EA5302_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C89900CBCE660733(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_C89900CBCE660733_OFFSET))(a1);
	}

	static ::System::Void Method_3_BC710BFD9E4F5D17(::Class_3_387BDAC12AFE15BA* a1)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_BC710BFD9E4F5D17_OFFSET))(a1);
	}

	static ::System::Void Method_3_EE0CFF7F6F24BA6C(::Class_3_387BDAC12AFE15BA* a1)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_EE0CFF7F6F24BA6C_OFFSET))(a1);
	}

	static ::System::Void Method_3_D0C1D692DD15FEA7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_D0C1D692DD15FEA7_OFFSET))(a1);
	}

	static ::System::Void Method_3_2C5CBB801D52E11F(::MoleMole::Battle::Entity* a1, ::Class_2_C3D82D0D1B9FA8D4* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_C3D82D0D1B9FA8D4*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_2C5CBB801D52E11F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E7D88B38D110565D(::System::String* a1, ::UnityEngine::GameObject* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_E7D88B38D110565D_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigCharacterAttachment* Method_3_9193255C44DE1FEC(::System::Int32 a1)
	{
		return ((::MoleMole::Config::ConfigCharacterAttachment*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_9193255C44DE1FEC_OFFSET))(a1);
	}

	static ::System::Void Method_3_8767DC4E6B381BBD(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_8767DC4E6B381BBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0510679EA0BDFE40(::Class_3_387BDAC12AFE15BA* a1, ::System::String* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_0510679EA0BDFE40_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_A869048548FCB420(::Class_3_387BDAC12AFE15BA* a1, ::Class_1_CFB7A3C91FBAC44A* a2)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*, ::Class_1_CFB7A3C91FBAC44A*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_A869048548FCB420_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CDAB4E4E69D7A9F5(::Class_3_387BDAC12AFE15BA* a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Single a7, ::System::Single a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_CDAB4E4E69D7A9F5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::Class_1_CFB7A3C91FBAC44A* Method_3_3103CACE47834A91(::Class_3_387BDAC12AFE15BA* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::Class_1_CFB7A3C91FBAC44A*(*)(::Class_3_387BDAC12AFE15BA*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_3103CACE47834A91_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_2897813958CD4E98(::Class_3_387BDAC12AFE15BA* a1, ::Class_1_CFB7A3C91FBAC44A* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_387BDAC12AFE15BA*, ::Class_1_CFB7A3C91FBAC44A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_METHOD_3_2897813958CD4E98_OFFSET))(a1, a2, a3);
	}
};
