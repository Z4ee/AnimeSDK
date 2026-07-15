#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_072CCAB84B38C1F3_METHOD_2_0AFAD1EC9AEDCF98_OFFSET UNITYSDK_OFFSET(0x169F76C0)
#define CLASS_2_072CCAB84B38C1F3_METHOD_2_15CAD4B37A120966_OFFSET UNITYSDK_OFFSET(0x169F7800)
#define CLASS_2_072CCAB84B38C1F3_METHOD_2_75F5788C80666805_OFFSET UNITYSDK_OFFSET(0x169F7730)
#define CLASS_2_072CCAB84B38C1F3_METHOD_2_CA94ABA214A2046A_OFFSET UNITYSDK_OFFSET(0x169F79D0)
#define CLASS_2_072CCAB84B38C1F3_METHOD_2_FC2661F064DB6E0D_OFFSET UNITYSDK_OFFSET(0x169F7940)
#define CLASS_2_072CCAB84B38C1F3__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x169F7780)
#define CLASS_2_072CCAB84B38C1F3__CTOR_OFFSET UNITYSDK_OFFSET(0x169F7C20)

inline static constexpr unsigned int Class_2_072CCAB84B38C1F3_TypeDefinitionIndex = 60034;

class Class_2_072CCAB84B38C1F3 : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0AFAD1EC9AEDCF98(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3_METHOD_2_0AFAD1EC9AEDCF98_OFFSET))(this, a1);
	}

	::System::Void Method_2_75F5788C80666805(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3_METHOD_2_75F5788C80666805_OFFSET))(this, a1);
	}

	::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3__COMPAREIMPL_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_15CAD4B37A120966(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3_METHOD_2_15CAD4B37A120966_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FC2661F064DB6E0D(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3_METHOD_2_FC2661F064DB6E0D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CA94ABA214A2046A(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_072CCAB84B38C1F3_METHOD_2_CA94ABA214A2046A_OFFSET))(this, a1, a2);
	}
};
