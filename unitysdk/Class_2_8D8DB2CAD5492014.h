#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8D8DB2CAD5492014_TextmapDownloadType.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_0_16E4307DCC419505_68;
class Class_1_51C874EE455D4F2F;
class Class_1_51C874EE455D4F2F_1;
class Class_1_52242588807D4112;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_8D8DB2CAD5492014_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xD7F2CD0)
#define CLASS_2_8D8DB2CAD5492014_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xD7F2AB0)
#define CLASS_2_8D8DB2CAD5492014_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xD7F2BD0)
#define CLASS_2_8D8DB2CAD5492014_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xD7F2BC0)
#define CLASS_2_8D8DB2CAD5492014_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xD7F2BB0)
#define CLASS_2_8D8DB2CAD5492014_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xD7F2BA0)
#define CLASS_2_8D8DB2CAD5492014_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xD7F2B40)
#define CLASS_2_8D8DB2CAD5492014_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xD7F2BE0)
#define CLASS_2_8D8DB2CAD5492014_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xD7F2B70)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xD7F2A90)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_2AD05FE3BC52FCB1_OFFSET UNITYSDK_OFFSET(0xD7F33F0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_6928FDA7FD8C4635_OFFSET UNITYSDK_OFFSET(0xD7F30F0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_69EC02E1DE51ED4F_OFFSET UNITYSDK_OFFSET(0xD7F28B0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xD7F2AA0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_A341FDF37ACC0297_OFFSET UNITYSDK_OFFSET(0xD7F30A0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0xD7F3390)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_E1097147727CB840_OFFSET UNITYSDK_OFFSET(0xD7F3210)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_E3551E7D9304A0E0_OFFSET UNITYSDK_OFFSET(0xD7F28A0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_E815DACFC7B4951E_OFFSET UNITYSDK_OFFSET(0xD7F2FC0)
#define CLASS_2_8D8DB2CAD5492014_METHOD_2_F5BFB4A8F63C3837_OFFSET UNITYSDK_OFFSET(0xD7F32F0)
#define CLASS_2_8D8DB2CAD5492014_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xD7F3050)
#define CLASS_2_8D8DB2CAD5492014_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xD7F38F0)
#define CLASS_2_8D8DB2CAD5492014_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xD7F2BF0)
#define CLASS_2_8D8DB2CAD5492014__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F2E30)
#define CLASS_2_8D8DB2CAD5492014__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xD7F2C00)
#define CLASS_2_8D8DB2CAD5492014___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xD7F3990)
#define CLASS_2_8D8DB2CAD5492014___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xD7F39A0)
#define CLASS_2_8D8DB2CAD5492014___N__0_OFFSET UNITYSDK_OFFSET(0xD7F3980)

inline static constexpr unsigned int Class_2_8D8DB2CAD5492014_TypeDefinitionIndex = 55583;

class Class_2_8D8DB2CAD5492014 : public ::RPG::Client::AbsDownloadData_1<::Class_1_52242588807D4112*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x78
	::System::String* Field_2_1; // 0x80
	::Class_2_8D8DB2CAD5492014_TextmapDownloadType Field_2_2; // 0x88
	::System::Boolean Field_2_3; // 0x8C
	::System::Boolean _IsEnable_k__BackingField; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014__CTOR_OFFSET))(this);
	}

	::Class_2_8D8DB2CAD5492014_TextmapDownloadType Method_2_E3551E7D9304A0E0()
	{
		return ((::Class_2_8D8DB2CAD5492014_TextmapDownloadType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_E3551E7D9304A0E0_OFFSET))(this);
	}

	::System::Void Method_2_69EC02E1DE51ED4F(::Class_2_8D8DB2CAD5492014_TextmapDownloadType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8D8DB2CAD5492014_TextmapDownloadType))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_69EC02E1DE51ED4F_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F* get_DefaultAbsolutePath()
	{
		return ((::Class_1_51C874EE455D4F2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_51C874EE455D4F2F_1* get_RelativePath()
	{
		return ((::Class_1_51C874EE455D4F2F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_52242588807D4112* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_52242588807D4112*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_2_E815DACFC7B4951E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_E815DACFC7B4951E_OFFSET))(this, a1);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Boolean Method_2_A341FDF37ACC0297(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_A341FDF37ACC0297_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E1097147727CB840(::Class_0_16E4307DCC419505_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_68*))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_E1097147727CB840_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_A367EE0F970DCB81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6928FDA7FD8C4635(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_6928FDA7FD8C4635_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2AD05FE3BC52FCB1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_2AD05FE3BC52FCB1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F5BFB4A8F63C3837(::Class_0_16E4307DCC419505_68* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_68*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014_METHOD_2_F5BFB4A8F63C3837_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014___N__0_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014___IFIXBASEPROXY_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D8DB2CAD5492014___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
