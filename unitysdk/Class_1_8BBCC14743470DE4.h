#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_458;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PreviewAvatarProxy; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8BBCC14743470DE4_METHOD_1_51210E3A85F90C04_OFFSET UNITYSDK_OFFSET(0x187D0C70)
#define CLASS_1_8BBCC14743470DE4_METHOD_1_8518339BDFC136C5_OFFSET UNITYSDK_OFFSET(0x187D0A70)
#define CLASS_1_8BBCC14743470DE4_METHOD_1_E6BB6C5A45D074B7_OFFSET UNITYSDK_OFFSET(0x187D0840)
#define CLASS_1_8BBCC14743470DE4__CTOR_OFFSET UNITYSDK_OFFSET(0x187D07C0)

inline static constexpr unsigned int Class_1_8BBCC14743470DE4_TypeDefinitionIndex = 62764;

class Class_1_8BBCC14743470DE4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_AAD4F4215611A944, ::RPG::Client::PreviewAvatarProxy*>* LMDLPAPLEBK; // 0x10
	::Class_0_16E4307DCC419505_458* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_458* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_458*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_E6BB6C5A45D074B7(::Struct_2_AAD4F4215611A944& a1, ::Class_1_EFF03B82D1C2B1F6* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4_METHOD_1_E6BB6C5A45D074B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8518339BDFC136C5(::RPG::Client::PreviewAvatarProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PreviewAvatarProxy*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4_METHOD_1_8518339BDFC136C5_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_51210E3A85F90C04(::Struct_2_AAD4F4215611A944& a1, ::Class_1_EFF03B82D1C2B1F6* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4_METHOD_1_51210E3A85F90C04_OFFSET))(this, a1, a2);
	}
};
