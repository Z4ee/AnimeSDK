#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_2_BD439116EE8F1A7D_Class_5_998650363C3E50C5;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_BD439116EE8F1A7D_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x1705DDF0)
#define CLASS_2_BD439116EE8F1A7D_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1705D1E0)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_06F27E4C3890FE12_OFFSET UNITYSDK_OFFSET(0x1705D900)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_32FFE2990C0CD521_OFFSET UNITYSDK_OFFSET(0x1705CFC0)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x1705D3E0)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_7B7647890109ABBD_OFFSET UNITYSDK_OFFSET(0x1705DAB0)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_AC93DF002F6DC3A3_OFFSET UNITYSDK_OFFSET(0x1705D690)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_B9A9BCA508476E78_OFFSET UNITYSDK_OFFSET(0x1705DE80)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_DDCA8161F84E5029_OFFSET UNITYSDK_OFFSET(0x1705CF60)
#define CLASS_2_BD439116EE8F1A7D_METHOD_2_DF3BFDD329DE92DE_OFFSET UNITYSDK_OFFSET(0x1705DEF0)
#define CLASS_2_BD439116EE8F1A7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1705CEF0)

inline static constexpr unsigned int Class_2_BD439116EE8F1A7D_TypeDefinitionIndex = 73684;

class Class_2_BD439116EE8F1A7D : public ::Class_1_E7175D70942CF05A
{
public:
	static ::Class_2_BD439116EE8F1A7D_Class_5_998650363C3E50C5** StaticGet_HEFGNIKHCLD()
	{
		return (::Class_2_BD439116EE8F1A7D_Class_5_998650363C3E50C5**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BD439116EE8F1A7D_TypeDefinitionIndex)->GetStaticField(0x5BD70);
	}

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_DDCA8161F84E5029(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_DDCA8161F84E5029_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_32FFE2990C0CD521(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_32FFE2990C0CD521_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC93DF002F6DC3A3(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::Class_1_8A6989C352B0F0F0* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::Class_1_8A6989C352B0F0F0*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_AC93DF002F6DC3A3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_2_06F27E4C3890FE12()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_06F27E4C3890FE12_OFFSET))(this);
	}

	::System::Single Method_2_7B7647890109ABBD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_7B7647890109ABBD_OFFSET))(this);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_B9A9BCA508476E78(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_B9A9BCA508476E78_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_BD439116EE8F1A7D_Class_5_998650363C3E50C5* Method_2_DF3BFDD329DE92DE()
	{
		return ((::Class_2_BD439116EE8F1A7D_Class_5_998650363C3E50C5*(*)())((::PBYTE)hIl2Cpp + CLASS_2_BD439116EE8F1A7D_METHOD_2_DF3BFDD329DE92DE_OFFSET))();
	}
};
