#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_414BCDCDAD47B487;
class Class_1_B5A9DA083406A268;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define CLASS_2_7CF36DB1DCE43BAF_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x1728E370)
#define CLASS_2_7CF36DB1DCE43BAF_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x1728DDF0)
#define CLASS_2_7CF36DB1DCE43BAF_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x1728E420)
#define CLASS_2_7CF36DB1DCE43BAF_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x1728DCA0)
#define CLASS_2_7CF36DB1DCE43BAF_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x1728DD10)
#define CLASS_2_7CF36DB1DCE43BAF_GETRECT_OFFSET UNITYSDK_OFFSET(0x1728DD90)
#define CLASS_2_7CF36DB1DCE43BAF_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0x1728E8A0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1728E3D0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1728E8C0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1B2926918207AD7C_OFFSET UNITYSDK_OFFSET(0x1728CA80)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1728EB00)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x1728EC20)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1728E9E0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5AEC8C9EE262F230_OFFSET UNITYSDK_OFFSET(0x1728E980)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_1_OFFSET UNITYSDK_OFFSET(0x1728EB80)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_2_OFFSET UNITYSDK_OFFSET(0x1728ECA0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x1728EA60)
#define CLASS_2_7CF36DB1DCE43BAF_SET_ALIAS_OFFSET UNITYSDK_OFFSET(0x1728E8B0)
#define CLASS_2_7CF36DB1DCE43BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1728CBB0)

inline static constexpr unsigned int Class_2_7CF36DB1DCE43BAF_TypeDefinitionIndex = 73787;

class Class_2_7CF36DB1DCE43BAF : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	::System::String* _Alias_k__BackingField; // 0xB8
	::Class_1_B5A9DA083406A268* IGMLHEBMBGC; // 0xC0
	::UnityEngine::Rect CJHPOKFPFIO; // 0xC8

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2, ::Class_1_414BCDCDAD47B487* a3, ::Class_1_B5A9DA083406A268* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55, ::Class_1_414BCDCDAD47B487*, ::Class_1_B5A9DA083406A268*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_2_1B2926918207AD7C(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_A77148D52D516E55 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::BlockNodeConfig*, ::Struct_2_A77148D52D516E55))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1B2926918207AD7C_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Boolean AliasMark()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_ALIASMARK_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* GetAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_GETASSETPATH_OFFSET))(this, a1);
	}

	::System::String* get_Alias()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_GET_ALIAS_OFFSET))(this);
	}

	::System::Void set_Alias(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_SET_ALIAS_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	static ::System::Boolean Method_2_5AEC8C9EE262F230(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5AEC8C9EE262F230_OFFSET))(a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_5C549BF7442375BC_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Void Method_2_5C549BF7442375BC_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_2_OFFSET))(this, a1);
	}
};
