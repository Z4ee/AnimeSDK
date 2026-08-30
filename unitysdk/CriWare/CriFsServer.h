#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriFsBindRequest; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsInstallRequest; }
namespace CriWare { class CriFsLoadAssetBundleRequest; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace CriWare { class CriFsRequest; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIFSSERVER_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x164F1060)
#define CRIWARE_CRIFSSERVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x164F0AC0)
#define CRIWARE_CRIFSSERVER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x164F1610)
#define CRIWARE_CRIFSSERVER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x164F1710)
#define CRIWARE_CRIFSSERVER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x164F1820)
#define CRIWARE_CRIFSSERVER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x164F0970)
#define CRIWARE_CRIFSSERVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x164F1050)
#define CRIWARE_CRIFSSERVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x164F0DB0)
#define CRIWARE_CRIFSSERVER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x164F01B0)
#define CRIWARE_CRIFSSERVER_GET_INSTALLBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x164F0AA0)
#define CRIWARE_CRIFSSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x164F0950)
#define CRIWARE_CRIFSSERVER_INSTALL_OFFSET UNITYSDK_OFFSET(0x164F1360)
#define CRIWARE_CRIFSSERVER_LOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x164F1210)
#define CRIWARE_CRIFSSERVER_LOADFILE_OFFSET UNITYSDK_OFFSET(0x164F1100)
#define CRIWARE_CRIFSSERVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x164F0C60)
#define CRIWARE_CRIFSSERVER_SET_INSTALLBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x164F0AB0)
#define CRIWARE_CRIFSSERVER_WEBINSTALL_OFFSET UNITYSDK_OFFSET(0x164F13D0)
#define CRIWARE_CRIFSSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x164F1930)

namespace CriWare
{
	inline static constexpr unsigned int CriFsServer_TypeDefinitionIndex = 38821;

	class CriFsServer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriFsServer** StaticGet__instance()
		{
			return (::CriWare::CriFsServer**)Il2CppClass::FromTypeDefinitionIndex(CriFsServer_TypeDefinitionIndex)->GetStaticField(0x5A4D0);
		}
		::System::Collections::Generic::List_1<::CriWare::CriFsRequest*>* requestList; // 0x28
		::System::Int32 _installBufferSize_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER__CTOR_OFFSET))(this);
		}

		static ::CriWare::CriFsServer* get_instance()
		{
			return ((::CriWare::CriFsServer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 get_installBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_GET_INSTALLBUFFERSIZE_OFFSET))(this);
		}

		::System::Void set_installBufferSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_SET_INSTALLBUFFERSIZE_OFFSET))(this, a1);
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_CREATEINSTANCE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_DESTROYINSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void AddRequest(::CriWare::CriFsRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsRequest*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_ADDREQUEST_OFFSET))(this, a1);
		}

		::CriWare::CriFsLoadFileRequest* LoadFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::CriWare::CriFsRequest_DoneDelegate* a3, ::System::Int32 a4)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_LOADFILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::CriWare::CriFsLoadAssetBundleRequest* LoadAssetBundle(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::CriWare::CriFsLoadAssetBundleRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_LOADASSETBUNDLE_OFFSET))(this, a1, a2, a3);
		}

		::CriWare::CriFsInstallRequest* Install(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3, ::CriWare::CriFsRequest_DoneDelegate* a4)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_INSTALL_OFFSET))(this, a1, a2, a3, a4);
		}

		::CriWare::CriFsInstallRequest* WebInstall(::System::String* a1, ::System::String* a2, ::CriWare::CriFsRequest_DoneDelegate* a3)
		{
			return ((::CriWare::CriFsInstallRequest*(*)(::PVOID, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_WEBINSTALL_OFFSET))(this, a1, a2, a3);
		}

		::CriWare::CriFsBindRequest* BindCpk(::CriWare::CriFsBinder* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_BINDCPK_OFFSET))(this, a1, a2, a3);
		}

		::CriWare::CriFsBindRequest* BindDirectory(::CriWare::CriFsBinder* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_BINDDIRECTORY_OFFSET))(this, a1, a2, a3);
		}

		::CriWare::CriFsBindRequest* BindFile(::CriWare::CriFsBinder* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriFsBindRequest*(*)(::PVOID, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSSERVER_BINDFILE_OFFSET))(this, a1, a2, a3);
		}
	};
}
