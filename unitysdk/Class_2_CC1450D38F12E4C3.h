#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CC1450D38F12E4C3_METHOD_2_0AFAD1EC9AEDCF98_OFFSET UNITYSDK_OFFSET(0xAA8D8E0)
#define CLASS_2_CC1450D38F12E4C3_METHOD_2_15CAD4B37A120966_OFFSET UNITYSDK_OFFSET(0xAA8DA20)
#define CLASS_2_CC1450D38F12E4C3_METHOD_2_49C893DE68B6ACD1_OFFSET UNITYSDK_OFFSET(0xAA8DBF0)
#define CLASS_2_CC1450D38F12E4C3_METHOD_2_75F5788C80666805_OFFSET UNITYSDK_OFFSET(0xAA8D950)
#define CLASS_2_CC1450D38F12E4C3_METHOD_2_FC2661F064DB6E0D_OFFSET UNITYSDK_OFFSET(0xAA8DB60)
#define CLASS_2_CC1450D38F12E4C3__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0xAA8D9A0)
#define CLASS_2_CC1450D38F12E4C3__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8DD10)

inline static constexpr unsigned int Class_2_CC1450D38F12E4C3_TypeDefinitionIndex = 58763;

class Class_2_CC1450D38F12E4C3 : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0AFAD1EC9AEDCF98(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3_METHOD_2_0AFAD1EC9AEDCF98_OFFSET))(this, a1);
	}

	::System::Void Method_2_75F5788C80666805(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3_METHOD_2_75F5788C80666805_OFFSET))(this, a1);
	}

	::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3__COMPAREIMPL_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_15CAD4B37A120966(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3_METHOD_2_15CAD4B37A120966_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FC2661F064DB6E0D(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3_METHOD_2_FC2661F064DB6E0D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_49C893DE68B6ACD1(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_CC1450D38F12E4C3_METHOD_2_49C893DE68B6ACD1_OFFSET))(this, a1, a2);
	}
};
