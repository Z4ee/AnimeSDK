#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/Struct_2_1A7849E5CC498A4A.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_414BCDCDAD47B487;
class Class_1_B5A9DA083406A268;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define CLASS_2_7CF36DB1DCE43BAF_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x13895CC0)
#define CLASS_2_7CF36DB1DCE43BAF_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x138957D0)
#define CLASS_2_7CF36DB1DCE43BAF_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x13895D70)
#define CLASS_2_7CF36DB1DCE43BAF_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x13895680)
#define CLASS_2_7CF36DB1DCE43BAF_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x138956F0)
#define CLASS_2_7CF36DB1DCE43BAF_GETRECT_OFFSET UNITYSDK_OFFSET(0x13895770)
#define CLASS_2_7CF36DB1DCE43BAF_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0x13896170)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x13895D20)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13896190)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1B2926918207AD7C_OFFSET UNITYSDK_OFFSET(0x13894260)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x138963D0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x138964F0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x138962B0)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5AEC8C9EE262F230_OFFSET UNITYSDK_OFFSET(0x13896250)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_1_OFFSET UNITYSDK_OFFSET(0x13896450)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_2_OFFSET UNITYSDK_OFFSET(0x13896570)
#define CLASS_2_7CF36DB1DCE43BAF_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x13896330)
#define CLASS_2_7CF36DB1DCE43BAF_SET_ALIAS_OFFSET UNITYSDK_OFFSET(0x13896180)
#define CLASS_2_7CF36DB1DCE43BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x138943B0)
#define CLASS_2_7CF36DB1DCE43BAF___IFIXBASEPROXY_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x13896670)
#define CLASS_2_7CF36DB1DCE43BAF___IFIXBASEPROXY_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x13896610)

inline static constexpr unsigned int Class_2_7CF36DB1DCE43BAF_TypeDefinitionIndex = 68973;

class Class_2_7CF36DB1DCE43BAF : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	::Class_1_B5A9DA083406A268* Field_2_0; // 0xB8
	::System::String* _Alias_k__BackingField; // 0xC0
	::UnityEngine::Rect Field_2_2; // 0xC8

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_1A7849E5CC498A4A a2, ::Class_1_414BCDCDAD47B487* a3, ::Class_1_B5A9DA083406A268* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Struct_2_1A7849E5CC498A4A, ::Class_1_414BCDCDAD47B487*, ::Class_1_B5A9DA083406A268*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_2_1B2926918207AD7C(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_1A7849E5CC498A4A a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::BlockNodeConfig*, ::Struct_2_1A7849E5CC498A4A))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF_METHOD_2_1B2926918207AD7C_OFFSET))(a1, a2);
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

	::System::String* __iFixBaseProxy_GetAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF___IFIXBASEPROXY_GETASSETPATH_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_AliasMark()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF36DB1DCE43BAF___IFIXBASEPROXY_ALIASMARK_OFFSET))(this);
	}
};
