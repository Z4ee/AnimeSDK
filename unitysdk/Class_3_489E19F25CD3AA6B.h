#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_489E19F25CD3AA6B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1158A640)
#define CLASS_3_489E19F25CD3AA6B_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1158AB20)
#define CLASS_3_489E19F25CD3AA6B_METHOD_3_B276CC2C1EB994AA_1_OFFSET UNITYSDK_OFFSET(0x1158AB70)
#define CLASS_3_489E19F25CD3AA6B_METHOD_3_B276CC2C1EB994AA_OFFSET UNITYSDK_OFFSET(0x1158A9C0)
#define CLASS_3_489E19F25CD3AA6B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1158A930)
#define CLASS_3_489E19F25CD3AA6B_METHOD_3_BBC554307A40C2F5_OFFSET UNITYSDK_OFFSET(0x1158AA40)
#define CLASS_3_489E19F25CD3AA6B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1158AA90)
#define CLASS_3_489E19F25CD3AA6B_UPDATE_OFFSET UNITYSDK_OFFSET(0x1158A8A0)
#define CLASS_3_489E19F25CD3AA6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1158A8E0)

inline static constexpr unsigned int Class_3_489E19F25CD3AA6B_TypeDefinitionIndex = 85060;

class Class_3_489E19F25CD3AA6B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_3_7()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_489E19F25CD3AA6B_TypeDefinitionIndex)->GetStaticField(0x35E50);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_B276CC2C1EB994AA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_METHOD_3_B276CC2C1EB994AA_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_3_BBC554307A40C2F5()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_METHOD_3_BBC554307A40C2F5_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_B276CC2C1EB994AA_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_489E19F25CD3AA6B_METHOD_3_B276CC2C1EB994AA_1_OFFSET))(this, a1);
	}
};
